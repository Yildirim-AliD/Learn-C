#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handler(int sig) {
    printf("Caught signal %d\n", sig);
}

int main(void) {
    signal(SIGINT, handler);
    printf("Press Ctrl+C to trigger signal handler...\n");
    while (1) {
        sleep(1);
    }
    return 0;
}
