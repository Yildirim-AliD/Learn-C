#include <stdio.h>

int main(void) {
    int a = 5, b = 3;
    int result;
    asm ("addl %%ebx, %%eax;"
         : "=a" (result)
         : "a" (a), "b" (b)
    );
    printf("Result of %d + %d = %d\n", a, b, result);
    return 0;
}
