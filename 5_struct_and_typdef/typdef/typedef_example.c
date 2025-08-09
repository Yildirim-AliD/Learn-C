#include <stdio.h>

typedef struct
{
    char brand[50];
    int year;
} Car;

int main()
{
    Car myCar;

    snprintf(myCar.brand, sizeof(myCar.brand), "Toyota");
    myCar.year = 2020;

    printf("Car brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);

    return 0;
}
