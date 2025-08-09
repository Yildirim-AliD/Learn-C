#include <stdio.h>

int global_var = 10; // Global variable (accessible throughout the file, exists until program ends)

void function_with_static() {
    static int static_var = 0; // Initialized only once, retains its value between calls
    int local_var = 0;         // Reinitialized every time the function is called

    static_var++;
    local_var++;

    printf("Static variable: %d, Local variable: %d\n", static_var, local_var);
}

void function_with_local() {
    int local_var = 5; // Local variable (exists only inside this function)
    printf("Local variable inside function: %d\n", local_var);
}

int main() {
    printf("Initial global variable: %d\n", global_var);

    for (int i = 0; i < 3; i++) {
        function_with_static(); // static_var keeps its value between calls
    }

    function_with_local();

    global_var = 20; // Global variable can be changed
    printf("Updated global variable: %d\n", global_var);

    return 0;
}
