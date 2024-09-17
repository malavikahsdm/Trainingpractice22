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
    int first_occurance = -1; 
    char ch;
    char replace_ch;
    printf("enter character to be replaced:");
    scanf("%c", &ch);
    printf("enter character which is going to replace:");
    while (getchar() != '\n');
    scanf("%c", &replace_ch);
 
    while (start < len) {
        if (str[start] == ch) {
            first_occurance = start;
            break;
        }
        start++;
    }
    /*if (first_occurance != -1) {
        printf("%d", first_occurance);
    } else {
        printf("Character not found");
    }*/
   // printf("\n");
    printf("original string: %s\n",str);
    str[first_occurance]=replace_ch;
    printf("after replace the character: %s",str);
 
    free(str); 
    return 0;
}
