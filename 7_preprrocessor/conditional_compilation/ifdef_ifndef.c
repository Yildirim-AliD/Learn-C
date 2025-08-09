#include <stdio.h>

// Try toggling these defines to see different output
#define DEBUG
// #define RELEASE

int main() {

#ifdef DEBUG
    printf("[DEBUG MODE] Debugging information is enabled.\n");
#endif

#ifndef RELEASE
    printf("[INFO] Release mode is NOT defined.\n");
#endif

#if defined(DEBUG) && !defined(RELEASE)
    printf("This is a DEBUG-only build.\n");
#elif defined(RELEASE)
    printf("This is a RELEASE build.\n");
#else
    printf("Unknown build configuration.\n");
#endif

#if __STDC__
    printf("This compiler conforms to ANSI C standards.\n");
#else
    printf("Non-standard C compiler.\n");
#endif

    return 0;
}
