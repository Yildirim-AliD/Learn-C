#include <stdio.h>
#include <setjmp.h>

jmp_buf jump_buffer;

void error_function() {
    printf("An error occurred. Jumping back to recovery point...\n");

    // Jump back to where setjmp was called
    longjmp(jump_buffer, 1);
}

int main() {
    if (setjmp(jump_buffer) != 0) {
        // We land here after longjmp is called
        printf("Recovered from error using longjmp!\n");
    } else {
        // This block runs the first time through
        printf("Setting recovery point with setjmp...\n");

        // Simulate an error condition
        error_function();

        // This line is never reached because longjmp jumps over it
        printf("This will not be printed.\n");
    }

    printf("Program continues normally after recovery.\n");
    return 0;
}
