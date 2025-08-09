#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments (including program name): %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    if (argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("Sum of %d and %d is %d\n", a, b, a + b);
    }

    return 0;
}
