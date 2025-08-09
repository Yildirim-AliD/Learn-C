#include <stdio.h>

// Constant definition using macro
#define PI 3.14159

// Function-like macro
#define SQUARE(x) ((x) * (x))

// Macro to find maximum of two values
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Token pasting example
#define VAR(name) my_##name

// Stringizing example
#define TO_STRING(x) #x

int main() {
    double radius = 4.0;
    printf("Radius: %.2f\n", radius);
    printf("Area of circle: %.2f\n", PI * SQUARE(radius));

    int a = 10, b = 25;
    printf("Max of %d and %d is %d\n", a, b, MAX(a, b));

    // Token pasting: creates variable name 'my_value'
    int VAR(value) = 100;
    printf("my_value = %d\n", my_value);

    // Stringizing: converts macro input to string
    printf("Macro as string: %s\n", TO_STRING(Hello_world!));

    return 0;
}