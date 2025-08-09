#include <stdio.h>

#define PI 3.14

int main()
{
    const int days_in_week = 7;
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("Number of days in a week: %d\n", days_in_week);
    printf("Area of a circle with radius %.2f: %.2f\n", radius, area);

    return 0;
}
