/*Remove Words with Fewer Than N Characters: Write a program that removes words with fewer than N characters from a pipe-separated string.For example, for input apple|kiwi|banana|grape with N = 5, the output should be apple|banana|grape.*/
#include <stdio.h>
#include<string.h>
#define max 30
int main() {
    char string[max];
    char *word[max];
    int count=0;
    printf("enter pipe separated string:");
    fgets(string,max,stdin);
    int len = strlen(string);
    if(string[len-1]=='\n'){
        string[len-1]='\0';
        }
    char *token = strtok(string,"|");
    while(token!=NULL){
        if(strlen(token)>=5){
            word[count]=token;
            count = count+1;
        }

        token = strtok(NULL,"|");

    }
    for(int i=0;i<count;i++){
    printf("%s",word[i]);
    if(i<count-1){
        printf("%c",'|');
    }

    }
    return 0;
}
