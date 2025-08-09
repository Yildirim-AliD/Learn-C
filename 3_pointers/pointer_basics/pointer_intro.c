#include <stdio.h>

int main() {
    int var = 42;
    int *ptr = &var; // Pointer stores the address of var

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Pointer ptr points to address: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 100; // Change value of var through pointer
    printf("New value of var after change via pointer: %d\n", var);

    return 0;
}
