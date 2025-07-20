#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    printf("Factorial of 5 = %d\n", factorial(5));

    printf("Fibonacci Series (first 10 terms):\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
