#include <stdio.h>

static int var_1;

int var_2 = 67;

long long var_3;

void foo(void);
void bar(void);

int main() {
    for(int i = var_1; i < var_2; i++){
        var_1+=var_1;
        var_2+=var_2;
        var_3+=var_3;
    }
    puts("20252028");
    foo();
    bar();
    return 0;
}