/*Write a program to check if a given string is a palindrome or not.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define MAX 20
 
void palindrom(char *str, int *count) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while (i <= j) {
        if (str[i] == str[j]) {
            *count = 1; // Characters match
        } else {
            *count = 0; // Characters do not match
            return; // Early exit if not a palindrome
        }
        i++;
        j--;
    }
}
 
int main() {
    char *str = NULL;
    int count = 0;
 
    str = (char *)malloc(MAX * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
 
    if (fgets(str, MAX, stdin) == NULL) {
        printf("Error in fgets\n");
        free(str);
        return EXIT_FAILURE;
    }
 
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
 
    palindrom(str, &count);
    if (count == 1) {
        printf("string is palindrome\n");
    } else {
        printf("string is not palindrome\n");
    }
 
    free(str);
    return 0;
}
