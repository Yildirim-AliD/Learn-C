#include <stdio.h>

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int data[] = {5, 10, 15, 20, 25};
    print_array(data, 5);

    return 0;
}
