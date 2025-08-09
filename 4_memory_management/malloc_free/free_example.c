#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 3);

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;

    printf("Values before free: %d, %d, %d\n", ptr[0], ptr[1], ptr[2]);

    free(ptr); // release memory

    // After freeing, ptr is a dangling pointer; do NOT dereference
    ptr = NULL; // good practice to avoid dangling pointer

    return 0;
}
