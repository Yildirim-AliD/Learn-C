#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to dynamically concatenate two strings
char* dynamic_concat(const char* str1, const char* str2) {
    // Calculate total length (+1 for null terminator)
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Allocate memory for the concatenated string
    char* result = (char*)malloc(len1 + len2 + 1);
    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Copy str1 and then append str2
    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

int main() {
    const char* first = "Hello, ";
    const char* second = "dynamic world!";

    char* concatenated = dynamic_concat(first, second);
    if (concatenated != NULL) {
        printf("Concatenated string: %s\n", concatenated);
        free(concatenated);  // Free allocated memory
    }

    return 0;
}
