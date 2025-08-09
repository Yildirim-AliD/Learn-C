#include <stdio.h>

void say_hello()
{
    printf("Hello from say_hello()!\n");
}

int square(int n)
{
    return n * n;
}

int main()
{
    say_hello();

    int num = 5;
    printf("The square of %d is %d\n", num, square(num));

    return 0;
}
