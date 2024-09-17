/*1. Write a program that removes duplicate words from a pipe-separated string.
For example, the input apple|orange|banana|apple|grape should return apple|orange|banana|grape.*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int main() {
    int i =0;
    char string[max];
    char temp[max];
    char *word[100];
    int count =0;
    fgets(string,max,stdin);
    int len = strlen(string);
    if(string[len-1]=='\n'){
        string[len-1]='\0';
    }
    strcpy(temp,string);
    // printf("%d",strtok(string,"|"));
    char *token = strtok(string,"|");
    while(token != NULL){
       int found = 0;
       for(int i=0;i<count;i++){
           if(strcmp(word[i],token)==0){
               found = 1;
               break;
           }
       }
       if(!found){
           word[count]=token;
           count = count+1;
       }
        token=strtok(NULL,"|");
    }
   //printf("%s",string);
   
   for(int i =0;i<count;i++){
       printf("%s",word[i]);
       if(i<count-1){
       printf("%c",'|');}
   }

    return 0;
}
