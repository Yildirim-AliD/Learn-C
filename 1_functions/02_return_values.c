#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int is_even(int num)
{
    return num % 2 == 0;
}

int main()
{
    int x = 10, y = 25;
    printf("Max: %d\n", max(x, y));

    int result = is_even(x);
    if (result)
        printf("%d is even\n", x);
    else
        printf("%d is odd\n", x);

    return 0;
}
