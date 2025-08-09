#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 3);

    if (ptr == NULL) {
        printf("Malloc failed!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        ptr[i] = i + 1;
    }

    printf("Original array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resize to 5 ints
    int *new_ptr = (int *)realloc(ptr, sizeof(int) * 5);
    if (new_ptr == NULL) {
        printf("Realloc failed!\n");
        free(ptr);
        return 1;
    }
    ptr = new_ptr;

    // Initialize new elements
    for (int i = 3; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("Resized array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
