#include <stdio.h>

int main() {
    int *ptr = NULL; // Null pointer, points to nothing

    if (ptr == NULL) {
        printf("Pointer is NULL and cannot be dereferenced safely.\n");
    }

    // Uncommenting the next line will cause a runtime error (segmentation fault)
    // printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
