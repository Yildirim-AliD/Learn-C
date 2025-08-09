#include <stdio.h>

int main()
{
    unsigned int a = 5; // 0101
    unsigned int b = 9; // 1001

    printf("a & b = %d\n", a & b);   // AND
    printf("a | b = %d\n", a | b);   // OR
    printf("a ^ b = %d\n", a ^ b);   // XOR
    printf("~a = %d\n", ~a);         // NOT
    printf("b << 1 = %d\n", b << 1); // Left shift
    printf("b >> 1 = %d\n", b >> 1); // Right shift

    return 0;
}
