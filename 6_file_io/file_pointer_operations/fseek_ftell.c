#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Move to the end of the file
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    printf("File size: %ld bytes\n", size);

    // Move back to the beginning
    fseek(file, 0, SEEK_SET);

    char ch = fgetc(file);
    printf("First character in file: %c\n", ch);

    fclose(file);
    return 0;
}
