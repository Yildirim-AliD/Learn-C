#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    for (int i = 0; i < 4; i++)
    {
        printf("Value: %d, Address: %p\n", *(p + i), (void *)(p + i));
    }

    return 0;
}
