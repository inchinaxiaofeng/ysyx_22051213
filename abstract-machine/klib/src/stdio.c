#include <stdarg.h>

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define BUF_SIZE 1024*4

// 用于反转指定字符串
static void reverse(char *str, int len) {
  assert(NULL != str);
  assert(0 < len);

  char *end = str + len - 1;
  char tmp;
  while (str < end)
  {
    tmp = *str;
    *str = *end;
    *end = tmp;
    str++;
    end--;
  }
}

// 无符号数itoa
static int uitoa(unsigned int num, char *str, int base) {
  assert(NULL != str);
  assert(16 >= base);
  assert(0 < base);

  int i = 0;
  int bit;
  do {
    bit = num % base;
    if (10 <= bit) str[i++] = 'a' + bit -10;
    else str[i++] = '0' + bit;
  } while ((num /= base) > 0);
  str[i] = '\0';
  reverse(str, i);
  
  return i;
}

// 符号数itoa
static int itoa(int num, char *str, int base) {
  assert(NULL != str);
  assert(16 >= base);
  assert(0 < base);

  int i = 0;
  int sign = num;
  int bit;
  if (sign < 0) num = -num;
  do {
    bit = num % base;
    if (10 <= bit) str[i++] = 'a' + bit - 10;
    else str[i++] = '0' + bit;
  } while ((num /= base) > 0);
  if (sign <  0) str[i++] = '-';
  str[i] = '\0';
  reverse(str, i);

  return i;
}

static int intlen(int num, int base) {
  assert(16 >= base);
  assert(0 < base);

  int i = 0;
  int sign = num;
  if (sign < 0) num = -num;
  do {
    i++;
  } while ((num /= base) > 0);
  if (sign < 0) i++;
  return i;
}

int offset(char *out, size_t *n, size_t padding) {
  assert(NULL != out);
  assert(NULL != n);

  char *start = out;
  size_t this_n = *n;
  while (0 < padding && 0 < this_n) {
    *out++ = ' ';
    this_n--;
    padding--;
  }
  *n = this_n;
  return out - start;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  assert(NULL != out);
  assert(NULL != fmt);

  char *start = out;
  n--; // 留一个字节给字符串结尾的'\0'
  int val;
  size_t off_len;
  const char *str;

  while ('\0' != *fmt && 0 < n) {
    if ('%' == *fmt) {
      fmt++; // 跳过'%'
      
      // 处理格式化标志
      int leftJustify = 0;
      if ('-' == *fmt) {
        leftJustify = 1;
        fmt++;
      }

      // 处理字段宽度
      int width = 0;
      while ('0' <= *fmt && '9' >= *fmt) {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }

      // // 处理格式化类型
      if ('l' == *fmt) {
        fmt++; // FIXME：在这里选择了跳过'l'但是不确定是不是正确的做法
      }

      // 处理格式化字符串
      switch (*fmt) {
        case '%': {
          *out++ = *fmt++; 
          n--; 
          break;
        }
        case 'd': {
          val = va_arg(ap, int);
          off_len = intlen(val, 10);

          if (0 < width && !leftJustify) out += offset(out, &n, width - off_len);
          out += itoa(val, out ,10);
          n -= off_len;
          if (0 < width && leftJustify) out += offset(out, &n, width - off_len);
          fmt++;

          break;
        }
        case 'x': {
          val = va_arg(ap, int); // FIXME: 这个stdio中所有的与int有关的，有可能超过变量的范围等意外情况，注意检查，目前尚没有想到有什么方法解决
          off_len = intlen(val, 16); // FIXME: 写的真鸡巴屎，可以直接对itoa做复用

          if (0 < width && !leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          out += itoa(val, out, 16);
          n -= off_len;
          if (0 < width && leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          fmt++;

          break;
        }
        case 'p': {
          *out++ = '0'; 
          n--;
          *out++ = 'x'; 
          n--;

          val = va_arg(ap, int);
          off_len = intlen(val, 16);

          if (0 < width && !leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          out += uitoa(val, out, 16);
          n -= off_len;
          if (0 < width && leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          fmt++;

          break;
        }
        case 'c': {
          *out++ = va_arg(ap, int); 
          n--;
          fmt++;
          break;
        }
        case 's': {
          str = va_arg(ap, const char*);
          off_len = strlen(str);
    
          if (0 < width && !leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          while (*str && 0 < n) {
            *out++ = *str++;
            n--;
          }
          if (0 < width && leftJustify && 0 < width - off_len) out += offset(out, &n, width - off_len);
          fmt++;

          break;
        }
        default: {
          *out++ = *fmt++; 
          n--; 
          break;
        }
      }
    } else { // 非格式化字符，直接复制到缓冲区
      *out++ = *fmt++;
      n--;
    }
  }
  *out = '\0';
  return out - start;
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char out[BUF_SIZE];
  // DESCRIPTION:在這裏我做了一個妥協，我不去做判斷是否打印完畢並且在buf滿的時候刷新再寫入。
  // 我選擇只允許函數向buf中寫入BUFF_SIZE大小的數據，並且只允許打印這麼多。採用了KISS原則
  int length = vsprintf(out, fmt, ap);
  assert(length <= BUF_SIZE);
  for (int i = 0; i < length; i++) {
    putch(out[i]);
  }
  va_end(ap);
  return length;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int length = vsprintf(out, fmt, ap);
  va_end(ap);
  return length;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int length = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return length;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return vsnprintf(out, BUF_SIZE, fmt, ap);
}

#endif