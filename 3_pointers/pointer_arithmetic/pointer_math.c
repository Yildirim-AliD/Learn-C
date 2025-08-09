#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Points to first element of array
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < length; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Increment pointer to point to next element
    ptr++;
    printf("After incrementing, pointer points to element: %d\n", *ptr);

    return 0;
}
