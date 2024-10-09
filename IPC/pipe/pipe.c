#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MAX 30

int main() {
    int fd[2];
    if (pipe(fd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    char *msg1 = "hello world from terminal1";
    char *msg2 = "hello world from terminal2";

    // Write messages to the pipe
    write(fd[1], msg1, strlen(msg1) + 1); // +1 for null terminator
    write(fd[1], msg2, strlen(msg2) + 1); // +1 for null terminator

    char message[MAX];

    // Read messages from the pipe
    for (int i = 0; i < 2; i++) {
        read(fd[0], message, MAX);
        printf("%s\n", message); // Add newline for better output
    }

    close(fd[0]); // Close read end of pipe
    close(fd[1]); // Close write end of pipe

    return 0;
}

