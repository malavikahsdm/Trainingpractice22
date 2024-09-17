#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define MAX 40
 
int main() {     
    char *str = (char *)malloc(MAX * sizeof(char));
    if (str == NULL) {
        printf("error in initializing of str");
        return EXIT_FAILURE;
    }
 
    if (fgets(str, MAX, stdin) == NULL) {
        printf("error while input of str");
        free(str); 
        return EXIT_FAILURE;
    }
 
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
 
    int start = 0;
    int last_occurance = -1; 
    char ch;
    scanf("%c", &ch);
 
    while (start < len) {
        if (str[start] == ch) {
            last_occurance = start;
        }
        start++;
    }
    if (last_occurance != -1) {
        printf("%d", last_occurance);
    } else {
        printf("Character not found");
    }
    printf("\n");
    printf("original string: %s\n",str);
    for(int k=last_occurance;k<len;k++){
        str[k]=str[k+1];
        len--;
    }
    printf("After removing the last occurance of the character: %s",str);
 
    free(str); 
    return 0;
}
