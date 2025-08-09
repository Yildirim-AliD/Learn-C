#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date date;  // nested struct
};

int main() {
    struct Event event1;

    snprintf(event1.name, sizeof(event1.name), "Conference");
    event1.date.day = 25;
    event1.date.month = 8;
    event1.date.year = 2025;

    printf("Event: %s\n", event1.name);
    printf("Date: %02d/%02d/%d\n", event1.date.day, event1.date.month, event1.date.year);

    return 0;
}
