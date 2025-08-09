#include <stdio.h>
#include "header_guard_example.h"

void print_version() {
    printf("Library version: %s\n", VERSION);
}

void print_message(const char *message) {
    printf("Message: %s\n", message);
}

int main() {
    print_version();
    print_message("Hello from a protected header!");
    return 0;
}
