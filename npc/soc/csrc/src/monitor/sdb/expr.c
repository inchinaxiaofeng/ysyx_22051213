#include <isa.h>
#include <common.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <memory/paddr.h>
#include <regex.h>

enum { // 确保所有的特殊字符放在前面，这样可以把前255位空下来给普通运算符留下空间去对应ASCII码
  TK_NOTYPE = 256, TK_EQ, TK_NEQ,
  NUM, HEX, // HEX以0x开头
  DEREF,
  NEG, // negtive
  REG = '$', // REG以$开头
  PLS = '+', SUB = '-', MUL = '*', DIV = '/',
  LBK = '(', RBK = ')',
  // L_AND = '&&', L_OR = '||'
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0x[0-9A-Fa-f]+", HEX},      // hex
  {"[0-9]+", NUM},              // num
  {"\\(", LBK},                 // left brackets
  {"\\)", RBK},                 // right brackets
  {" +", TK_NOTYPE},            // spaces
  {"\\+", PLS},                 // plus
  {"\\-", SUB},                 // sub
  {"\\*", MUL},                 // mul
  {"\\/", DIV},                 // div
  {"==", TK_EQ},                // equal
  {"!=", TK_NEQ},               // not equal
  {"\\$[0-9a-z]+", REG},        // reg
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  Log("Init regex...");
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  word_t type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. *///TODO:Other rules should be add.
    // Log("新循环");
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        if (substr_len > 32) {
          Log("The number too long!");
          return false;
        }

        //  Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        tokens[nr_token].type = rules[i].token_type;
        switch (rules[i].token_type) {
          case TK_NOTYPE: break; // 空格字符

          case PLS: case SUB: case MUL: case DIV: // 基本运算符
          case LBK: case RBK: // 优先级运算符
          case DEREF: case NEG: // 特殊运算符
          case TK_EQ: case TK_NEQ: // 关系运算符
            nr_token++;
            break;
          
          case NUM: // 十进制
            memcpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          case HEX: // 十六进制
            memcpy(tokens[nr_token].str, substr_start+2, substr_len-2);
            tokens[nr_token].str[substr_len-2] = '\0';
            nr_token++;
            break;
          case REG: // 寄存器
           memcpy(tokens[nr_token].str, substr_start, substr_len);
           tokens[nr_token].str[substr_len] = '\0';
           nr_token++;
           break;
          
          default:
            Log("Not the expected match. Check here.");
            return false;
            break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

word_t eval (int p, int q, bool *success, int *position);

bool check_parentheses(int p, int q, bool *success, int *position) { // DOWN
  /*
   * 我们约定规则如下:
   * 0, tokens的扫描从左往右，一次扫描应当进行到底，遇到tokens组合错误立即设置错误位置，设置success
   * 1, 任何一个表达式应当以'('开始，以')'结尾
   * 2, 任意多的'('就应当有任意多的')'与之相匹配
   * 3, 任何时候'('的数量都应当大于')'的数量
   */
  bool is_parentheses = tokens[p].type == LBK; // 当违反规则1时，设置错误信息，以便后续返回
  int index = p, level = -1; // 默认从-1开始，表示此时没有匹配到任何一个前括号；使用level对前括号进行计数
  while (index <= q) // 注意边界条件：可以判断到最后一个数字的。
  {
    if (tokens[index].type == LBK) {
      level++;
    } else if (tokens[index].type == RBK) {
      if (level < 0) {
        *success = false;
        *position = p;
        return false;
      } else {
        level--;
      }
    }

    if (index < q)
      is_parentheses = (level >= 0) && is_parentheses;
    index++;
  }

  if (level != -1) {
    *success = false;
    *position = p;
    return false;
  }
  return is_parentheses;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  for (size_t i = 0; i < nr_token; i++)
  {
    if (tokens[i].type == MUL && (i == 0 || // i == 0是指第一个就要解引用的情况
                tokens[i-1].type == LBK )) { // 逻辑运算符短路求值，||运算符前面的满足时，后面的不再进行判断，否则出现错误
      tokens[i].type = DEREF;
    } else if (tokens[i].type == SUB && (i == 0 ||
                tokens[i-1].type == LBK ||
                tokens[i-1].type == SUB )) {
      tokens[i].type = NEG;
    }
  }
  

  *success = true;
  int position = -1;
  word_t result = eval(0, nr_token-1, success, &position);
  if (*success == false)
  {
    printf("Wrong at position: %d\n%s\n%*.s^\n", position, e, position, "");
    return 0;
  }
  return result;
}
/*
 * 在这里返回不同运算符的优先级
 * 1为最高，共15级
 */
int prio(int type) {
  switch (type)
  {
    case MUL: // 乘
    case DIV: // 除
      return 3;
  
    case PLS: // 加
    case SUB: // 减
      return 4;

    case TK_EQ: // euqal
    case TK_NEQ: // not equal
      return 7;
    // 不起分割表达式作用的运算符都不应当判断为主运算符
    case NUM:
    case HEX:
    case DEREF:
    case REG:
      // Log("跳过性的符号");
      return 16;

    case LBK:
    case RBK:
      Log("意外的括号匹配, Check here!");
      return 16;
    default:
      Log("意外的匹配, Check here!");
      return -1;
  }
}

word_t eval (int p, int q, bool *success, int *position) {
  //Log("新的递归，成功？：%d", *success);
  if (NULL == success || NULL == position) return 0;
  if(*success == false) return 0;
  if (p > q) {  // Bad expression.
    *success = false;
    *position = p;
    return 0;
  }
  else if (p == q) { // 【单token 数值处理】
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    word_t buffer;
    switch (tokens[p].type)
    {
    case NUM:
      sscanf(tokens[p].str, "%ld", &buffer);
      break;
    case HEX:
      sscanf(tokens[p].str, "%lx", &buffer);
      break;
    case REG:
      buffer = isa_reg_str2val(tokens[p].str, success);
      break;
    default:
      Log("意外的数据类型,Check here!");
      break;
    }
    //Log("返回数：%d", sscanf(tokens[p].str, "%ld", &buffer));
    return buffer;
  }
  else if (1 == q-p) { // 【双token 特殊运算符处理】任何时候当表达式已经被分割成两个连续的tokens时，总是意味着它们有特殊的含义
    word_t buffer = 0;
    switch (tokens[p].type)
    {
    case DEREF:
      // Log("DEREF");
      buffer =  *((word_t *)guest_to_host(eval(p+1, q, success, position))); // FIXME:传入奇怪地址时可能报错。 
      break;
    case NEG:
      buffer = -eval(p+1, q, success, position); // FIXME:不能在()前面直接使用-，否则会无法匹配
      break;
    default:
      buffer = -1;
      Log("意外的特殊符号匹配,Check here!");
      break;
    }
    return buffer;
  }
  else if (check_parentheses(p, q, success, position) == true) { // 【括号处理】
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    // Log("解括号");
    return eval(p+1, q-1, success, position);
  }
  else { // 【运算处理】
    // Log("计算");
      int op = -1; // 记录当前主符号
      int level = -1; // 用于记录当前的括号层次
      for (size_t i = p; i < q; i++)  // 我们要求运算的符号都是右结合的
      {
        if (tokens[i].type == '(') {
          level++;
        }
        else if (tokens[i].type == ')') {
          level--;
        }
        else if (-1 == level && prio(tokens[i].type) > 0) { // 要找的主运算符不在某一个括号层次中
          if (-1 == op || prio(tokens[i].type) <= prio(tokens[op].type)) { // 由于||是短路求值的运算符，所以当前面的op == -1的时候，后面的就不会进行判断，避免出现数组下标越界的错误。
            op = i; // 记录下最高优先级的运算符
          }
        }
      }
      if (-1 == op) // 没有找到主运算符
      {
        Log("没有找到主运算符,Check here");
        *position = p;
        *success = false;
        return 0;
      }
      // 递归求两个子表达式的内容
      word_t val1 = eval(p, op-1, success, position);
      word_t val2 = eval(op+1, q, success, position);
      switch (tokens[op].type)
      {
      case PLS: return val1+val2;
      case SUB: return val1-val2;
      case MUL: return val1*val2;
      case DIV: return val1/val2;
      case TK_EQ: return val1==val2;
      case TK_NEQ: return val1!=val2;
      default: Log("Unknown op type.Check here!"); *success = false; *position = op; return 0;
      }

      return 0;
  }
}