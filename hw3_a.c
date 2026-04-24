#include <stdio.h>

static int var_1;

int var_2 = 67;

long long var_3;

void foo(void);
void bar(void);

int main() {
    if ("abc") {
        var_1++;
        var_2++;
        var_3++;
    }
    __asm__("nop\nnop");
    puts("20252028");
    foo();
    bar();
    return 0;
}