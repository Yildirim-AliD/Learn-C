#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int numbers[5];
    size_t count = fread(numbers, sizeof(int), 5, file);

    printf("Read %zu integers:\n", count);
    for (size_t i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    fclose(file);
    return 0;
}
