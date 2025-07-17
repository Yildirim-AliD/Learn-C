#include <stdio.h>

int main()
{
    int num = 15;

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("Number is positive and even.\n");
        }
        else
        {
            printf("Number is positive and odd.\n");
        }
    }
    else
    {
        printf("Number is not positive.\n");
    }

    return 0;
}
