#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int numbers[] = {10, 20, 30, 40, 50};
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    fwrite(numbers, sizeof(int), count, file);

    fclose(file);
    return 0;
}
