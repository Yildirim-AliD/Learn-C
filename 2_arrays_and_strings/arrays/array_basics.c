#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print array elements
    printf("First element: %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);
    printf("Third element: %d\n", numbers[2]);

    // Modify an element
    numbers[2] = 99;
    printf("Modified third element: %d\n", numbers[2]);

    return 0;
}
