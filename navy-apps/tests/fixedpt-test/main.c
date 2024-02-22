#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "fixedptc.h"

#define simple_op(A, sign, B, C) printf("OP: "); fixedpt_print(A); printf(" %s ", sign); fixedpt_print(B); printf(" = "); fixedpt_printn(C);

void fixedpt_print(fixedpt A) {
    char num[20];
    fixedpt_str(A, num, -2);
    printf("%s",num);
}

void fixedpt_printn(fixedpt A) {
    fixedpt_print(A);
    printf("\n");
}

int main() {
    fixedpt A = fixedpt_rconst(2.5);
    fixedpt B = fixedpt_fromint(4);
    fixedpt C = fixedpt_add(A, B);
    simple_op(A, "+", B, C)

    A = fixedpt_rconst(-1.6);
    C = fixedpt_abs(A);
    simple_op(A, "abs", A, C)

    C = fixedpt_mul(A, B);
    simple_op(A, "*", B, C)

    C = fixedpt_muli(B, 8);
    simple_op(A, "*", 8, C)

    printf("The most precise number: "); fixedpt_printn(1); // 精度
    printf("The biggest integer "); fixedpt_printn(0x7fffff00); // 最大整數
    printf("The biggest number(NaN) "); fixedpt_printn(0x7fffffff); // 最大數
    printf("Random number: "); fixedpt_printn(fixedpt_rconst(143.1123574819));

    printf("PI: "); fixedpt_printn(FIXEDPT_PI);
    printf("E: "); fixedpt_printn(FIXEDPT_E);

    printf("Floor(3.4); "); fixedpt_printn(fixedpt_floor(fixedpt_rconst(3.4)));
    printf("Ceil(1.2); "); fixedpt_printn(fixedpt_ceil(fixedpt_rconst(1.2)));


}