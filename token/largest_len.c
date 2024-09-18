// Find Longest Word: Write a program that finds and prints the longest word from a pipe-separated string. For example, for input apple|banana|grape|orange, 
// the output should be banana (if there are multiple longest words, you can print all of them).


#include <stdio.h>
#include <string.h>

#define max 100

int main() {
    char string[max];
    char *word[max];
    char largest[20];
    int count = 0;

    printf("Enter the pipe-separated string: ");
    fgets(string, max - 1, stdin);

    int len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    
    char *token = strtok(string, "|");
    while (token != NULL) {
        word[count] = token;
        count = count + 1;
        token = strtok(NULL, "|");
    }
    strcpy(largest,word[0]);
    
    for(int i=0;i<count;i++){
        if(strlen(word[i])>=strlen(largest)){
            strcpy(largest,word[i]);
        }
    }
    for(int i=0;i<count;i++){
        if(strlen(largest)==strlen(word[i])){
            printf("%s\n",word[i]);
        }
    }
    

    return 0;
}

