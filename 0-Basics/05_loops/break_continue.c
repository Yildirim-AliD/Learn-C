#include <stdio.h>

int main() {
    printf("Demonstrating 'break':\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("i = %d -> Breaking the loop\n", i);
            break; // Exit the loop completely
        }
        printf("i = %d\n", i);
    }

    printf("\nDemonstrating 'continue':\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("i = %d -> Skipping this iteration\n", i);
            continue; // Skip this iteration and move to the next
        }
        printf("i = %d\n", i);
    }

    return 0;
}
