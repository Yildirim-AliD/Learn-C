#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements:\n");
    for (int i = 0; i < length; i++) {
        printf("Index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
