#include <stdio.h>

// Function to be used as callback
void greet() {
    printf("Hello from callback function!\n");
}

// Function that accepts a callback function pointer
void executeCallback(void (*callback)()) {
    printf("Before callback\n");
    callback();
    printf("After callback\n");
}

int main() {
    executeCallback(greet);
    return 0;
}
