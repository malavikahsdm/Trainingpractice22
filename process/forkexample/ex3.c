#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

#define MAX_PROCESSES 4 // Define the maximum number of child processes

// Function to compute the sum of a portion of the array
int sum(int arr[], int start, int end) {
    int total = 0;
    for (int i = start; i < end; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < MAX_PROCESSES) {
        printf("The array must have at least %d elements.\n", MAX_PROCESSES);
        return 1; // Exit if there are not enough elements
    }

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pid_t pids[MAX_PROCESSES]; // Array to hold process IDs
    int portion_size = n / MAX_PROCESSES; // Size of each portion
    int results[MAX_PROCESSES]; // To store results from child processes

    // Create child processes
    for (int i = 0; i < MAX_PROCESSES; i++) {
        pids[i] = fork();
        if (pids[i] < 0) {
            perror("Fork failed");
            exit(1);
        } else if (pids[i] == 0) { // Child process
            int start = i * portion_size;
            int end = (i == MAX_PROCESSES - 1) ? n : start + portion_size; // Handle last portion
            int sum_result = sum(arr, start, end);
            exit(sum_result); // Exit with the computed sum
        }
    }

    // Parent process: collect results
    int total_sum = 0;
    for (int i = 0; i < MAX_PROCESSES; i++) {
        int status;
        waitpid(pids[i], &status, 0); // Wait for each child
        if (WIFEXITED(status)) {
            total_sum += WEXITSTATUS(status); // Collect the child's exit status
        }
    }

    printf("Total Sum: %d\n", total_sum);
    return 0;
}

