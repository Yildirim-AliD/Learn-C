#include <stdio.h>

int custom_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello, custom strlen!";
    printf("String: %s\n", str);
    printf("Length using custom_strlen: %d\n", custom_strlen(str));

    return 0;
}
