Sort Words Alphabetically: Write a program that sorts the words in a pipe-separated string alphabetically. For example, for input 
: apple|banana|grape|orange, the output should be apple|banana|grape|orange.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main() {
    char str[max];
    char *words[max];
    int count = 0;

    
    fgets(str, max - 1, stdin);

    
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

  
    char *token = strtok(str, "|");
    while (token != NULL) {
        words[count] = token;
        count++;
        token = strtok(NULL, "|");
    }

    
    int n = count; 
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (strcmp(words[k], words[k + 1]) > 0) {
             
                char *temp = words[k];
                words[k] = words[k + 1];
                words[k + 1] = temp;
            }
        }
    }

    
    for (int j = 0; j < n; j++) {
        if (j > 0) printf("|");
        printf("%s", words[j]);
    }
    printf("\n");

    return 0;
}

