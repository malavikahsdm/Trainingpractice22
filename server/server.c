#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX_CLIENTS 10

typedef struct {
    char username[50];
    char password[50];
    int forwardingEnabled;
    char forwardingNumber[50];
} User;

// Simple in-memory user database
User users[MAX_CLIENTS];
int userCount = 0;

// Function to register a user
void registerUser(char *username, char *password) {
    strcpy(users[userCount].username, username);
    strcpy(users[userCount].password, password);
    users[userCount].forwardingEnabled = 0;  // Initially disabled
    userCount++;
    printf("User registered: %s\n", username);
}

// Function to authenticate a user
int authenticateUser(char *username, char *password) {
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 &&
            strcmp(users[i].password, password) == 0) {
            return i; // Return user index if authenticated
        }
    }
    return -1; // Not authenticated
}

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Attach socket to the port
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // Binding
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 3) < 0) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d\n", PORT);

    while (1) {
        // Accepting a new connection
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                                  (socklen_t*)&addrlen)) < 0) {
            perror("accept");
            exit(EXIT_FAILURE);
        }

        char buffer[1024] = {0};
        read(new_socket, buffer, 1024);
        char command[50], username[50], password[50];

        sscanf(buffer, "%s %s %s", command, username, password);

        if (strcmp(command, "register") == 0) {
            registerUser(username, password);
            send(new_socket, "Registered successfully\n", strlen("Registered successfully\n"), 0);
        } else if (strcmp(command, "login") == 0) {
            int userIndex = authenticateUser(username, password);
            if (userIndex >= 0) {
                send(new_socket, "Login successful\n", strlen("Login successful\n"), 0);
            } else {
                send(new_socket, "Login failed\n", strlen("Login failed\n"), 0);
            }
        }

        close(new_socket);
    }
    return 0;
}

