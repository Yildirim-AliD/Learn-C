#include <stdio.h>

int main() {
    printf("Predefined Macros in C:\n");
    printf("------------------------\n");

    printf("File name      : %s\n", __FILE__);
    printf("Compilation date: %s\n", __DATE__);
    printf("Compilation time: %s\n", __TIME__);
    printf("Current line   : %d\n", __LINE__);
    printf("ANSI C defined : %d\n", __STDC__);

    // Demonstrating __LINE__ macro change
    printf("Now on line: %d\n", __LINE__);

    return 0;
}
