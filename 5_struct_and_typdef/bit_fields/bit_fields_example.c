#include <stdio.h>

struct PackedData {
    unsigned int flag1 : 1;  // 1 bit
    unsigned int flag2 : 2;  // 2 bits
    unsigned int flag3 : 3;  // 3 bits
};

int main() {
    struct PackedData data;

    data.flag1 = 1;  // can only be 0 or 1
    data.flag2 = 3;  // max 3 (2 bits)
    data.flag3 = 5;  // max 7 (3 bits)

    printf("flag1: %u\n", data.flag1);
    printf("flag2: %u\n", data.flag2);
    printf("flag3: %u\n", data.flag3);

    return 0;
}
