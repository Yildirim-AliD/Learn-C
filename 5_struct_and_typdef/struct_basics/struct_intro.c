#include <stdio.h>

// Define a simple struct
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;

    // Assign values
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.age = 30;

    // Print struct members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
