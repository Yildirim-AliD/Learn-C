#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element[%d] = %d\n", i, arr[i]);
    }
}

int main()
{
    int x = 10, y = 20;
    printf("Before Swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x=%d, y=%d\n", x, y);

    int nums[] = {1, 2, 3, 4, 5};
    print_array(nums, 5);

    return 0;
}
