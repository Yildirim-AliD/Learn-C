#include <stdio.h>

void printInt(void *data) {
    int *intPtr = (int *)data;
    printf("Integer value: %d\n", *intPtr);
}

void printFloat(void *data) {
    float *floatPtr = (float *)data;
    printf("Float value: %.2f\n", *floatPtr);
}

int main() {
    int a = 10;
    float b = 3.14f;

    void *ptr;

    ptr = &a;
    printInt(ptr);

    ptr = &b;
    printFloat(ptr);

    return 0;
}
