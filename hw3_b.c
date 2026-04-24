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
    double math = sqrt((double)var_2);
    (void)math;
    int i;
    for (i = 0; i < my_int[0]; i++) {
        my_int[1] += i;
        my_int[2] -= i;
        var_5 += i;
        var_5 -= my_int[1];
        var_5 *= my_int[2];
    }
}

void foo_bar(void) {
    foo();
    bar();
}