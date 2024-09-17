#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 30
int calculate_score( char *str);
int main(){     
    char *str = (char *)malloc(MAX*sizeof(char));
    if (str==NULL){
        printf("error in initializing of str");
        return EXIT_FAILURE;
    }
    if (fgets(str,MAX,stdin)==NULL){
        printf("error while input of str");
        return EXIT_FAILURE;
    }
    int len= strlen(str);
    if((len >0)&&str[len-1]=='\n'){
        str[len-1]='\0';
    }
    int score = calculate_score(str);
    printf("Score: %d\n", score);
    return 0;
}
bool ispalindrome(char *str,int start,int end){
    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start= start+1;
        end  = end-1;
    }
    return true;
}
int calculate_score( char *str) {
    int length = strlen(str);
    int score = 0;
    // Check for palindromes of length 4
    for (int i = 0; i <= length - 4; i++) {
        if (ispalindrome(str, i, i + 3)) {
            score += 5;
        }
    }
    // Check for palindromes of length 5
    for (int i = 0; i <= length - 5; i++) {
        if (ispalindrome(str, i, i + 4)) {
            score += 10;
        }
    }
    return score;
}
