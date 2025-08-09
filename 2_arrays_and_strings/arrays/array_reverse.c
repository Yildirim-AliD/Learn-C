#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }

    // Reverse the array
    for (int i = 0; i < length / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[length - 1 - i];
        numbers[length - 1 - i] = temp;
    }

    printf("\nReversed array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
