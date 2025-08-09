#include <stdarg.h>
#include <stdio.h>

// A custom printf-like function that handles %s and %d
void printf_custom(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    const char *p;
    for (p = fmt; *p != '\0'; p++) {
        if (*p == '%' && *(p + 1) != '\0') {
            p++;
            switch (*p) {
                case 's': {
                    char *s = va_arg(args, char*);
                    fputs(s, stdout);
                    break;
                }
                case 'd': {
                    int d = va_arg(args, int);
                    fprintf(stdout, "%d", d);
                    break;
                }
                default:
                    putchar('%');
                    putchar(*p);
            }
        } else {
            putchar(*p);
        }
    }
    va_end(args);
}

int main(void) {
    printf_custom("Hello %s, you are %d years old.\n", "Ali", 23);
    return 0;
}