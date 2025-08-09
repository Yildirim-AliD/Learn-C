#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "Appending this line.\n");

    fclose(file);
    return 0;
}
