#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;

void second(void) {
    printf("In second(), jumping back to main.\n");
    longjmp(buf, 1);
}

void first(void) {
    second();
    printf("This line will never be reached.\n");
}

int main(void) {
    if (setjmp(buf)) {
        printf("Back in main after longjmp.\n");
    } else {
        first();
    }
    return 0;
}
