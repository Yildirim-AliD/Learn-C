#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    char str3[50];

    // strlen - length of str1
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy - copy str1 to str3
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // strcat - concatenate str2 to str1
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strcmp - compare str1 and str3
    int cmp = strcmp(str1, str3);
    if (cmp == 0)
        printf("str1 and str3 are equal.\n");
    else if (cmp > 0)
        printf("str1 is greater than str3.\n");
    else
        printf("str1 is less than str3.\n");

    return 0;
}
