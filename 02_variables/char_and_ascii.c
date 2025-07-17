#include <stdio.h>

int main()
{
    char letter = 'A';
    int ascii_value = letter;

    printf("Character: %c\n", letter);
    printf("ASCII value: %d\n", ascii_value);

    char next_letter = letter + 1;
    printf("Next character: %c\n", next_letter);

    return 0;
}
