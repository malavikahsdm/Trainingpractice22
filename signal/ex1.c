#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) {
    printf("Caught signal %d\n", sig);
}

int main() {
    signal(SIGINT, handle_sigint);

    for (int i = 0; i < 4; i++) {
        printf("hello world\n");
        sleep(1);
    }

    printf("Finished looping. Exiting program.\n");
    return 0;
}

