#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[3] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i, points[i].x, points[i].y);
    }

    return 0;
}
