#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Using normal indexing:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nUsing pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(numbers + %d) = %d\n", i, *(numbers + i));
    }

    return 0;
}
