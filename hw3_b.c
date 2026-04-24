#include <math.h>

static int var_5 = 67;

int my_int[3] = {6,7,0};

int var_3;

extern int var_2;

void foo(void) {
    static int var_3_local;
    var_3_local = var_3_local + 67;
}

void bar(void) {
    var_2 = var_2 + 67;
    sqrt(16);
}

void foo_bar(void) {
    foo();
    bar();
}