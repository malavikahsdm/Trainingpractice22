// Count Occurrences of Each Word: Write a program that counts the occurrences of each word in a pipe-separated string and prints the results. For example, for input apple|orange|banana|apple|grape|banana|apple, the output should be:
// apple: 3
// orange: 1
// banana: 2
// grape: 1



#include <stdio.h>
#include <string.h>

#define max 100

int main() {
    char string[max];
    char *word[max];
    int count = 0;

    printf("Enter the pipe-separated string: ");
    fgets(string, max - 1, stdin);

    int len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }

    // Tokenize the string based on the pipe delimiter
    char *token = strtok(string, "|");
    while (token != NULL) {
        word[count] = token;
        count = count + 1;
        token = strtok(NULL, "|");
    }

    // Array to mark whether a word has been counted
    int counted[max] = {0};

    // Iterate over each word
    for (int i = 0; i < count; i++) {
        // Skip already counted words
        if (counted[i]) {
            continue;
        }

        int c = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(word[i], word[j]) == 0) {
                c++;
                // Mark word[j] as counted
                counted[j] = 1;
            }
        }

        printf("%s: %d\n", word[i], c);
    }

    return 0;
}

