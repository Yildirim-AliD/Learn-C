#include <stdio.h>

int main() {
    // Declare and initialize a 3x3 integer matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix:\n");

    // Print matrix elements
    for (int i = 0; i < 3; i++) {         // Rows
        for (int j = 0; j < 3; j++) {     // Columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
