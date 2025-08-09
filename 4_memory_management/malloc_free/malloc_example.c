#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5); // allocate memory for 5 ints

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); // free allocated memory

    return 0;
}
