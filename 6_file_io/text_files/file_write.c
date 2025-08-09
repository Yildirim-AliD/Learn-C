#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "Hello, file writing!\n");
    fprintf(file, "This overwrites existing content.\n");

    fclose(file);
    return 0;
}
