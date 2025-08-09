#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(5, sizeof(int)); // allocate and zero-initialize memory for 5 ints

    if (ptr == NULL) {
        printf("Calloc failed!\n");
        return 1;
    }

    printf("Values after calloc (should be zero): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
