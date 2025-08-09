#include <stdio.h>

// Comparison functions
int ascending(int a, int b) {
    return a > b;
}

int descending(int a, int b) {
    return a < b;
}

// Bubble sort with comparison function pointer
void bubbleSort(int arr[], int n, int (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (cmp(arr[j], arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n, ascending);
    printf("Sorted ascending:\n");
    printArray(arr, n);

    bubbleSort(arr, n, descending);
    printf("Sorted descending:\n");
    printArray(arr, n);

    return 0;
}
