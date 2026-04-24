#include <math.h>
extern int var_2;
int my_int[3] = {6,7,0};
static int var_5 = 67;
int var_3;

void foo(void) {
    static int var_3;
    var_3 += var_2;
}

void bar(void) {
    int math = sqrt(var_2);
    var_3+=var_2;
    __asm__("nop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop");
}

void foo_bar(void) {
    foo();
    bar();
    __asm__("nop\nnop\nnop\nnop");
}