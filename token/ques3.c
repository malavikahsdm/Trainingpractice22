/*Write a program that sorts the words by their length in ascending order in a pipe-separated string.*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100

int main() {
   char string[max];
   char *word[max];
   int count=0;
   printf("enter the pipe separated string:");
   fgets(string,max,stdin);
   int len = strlen(string);
   if(string[len-1]=='\n'){
       string[len-1]='\0';
   }
   char *token = strtok(string,"|");
   while(token!=NULL){
       word[count]=token;
       count = count+1;
       token = strtok(NULL,"|");

   }
   for(int i=0;i<count;i++){
        printf("%s ",word[i]);
    }
    printf("\n");
   for(int i =0;i<count;i++){
       for(int j=0; j<count-i-1;j++){
           if(strlen(word[j])>strlen(word[j+1])){
               char *temp = word[j];
               word[j] = word[j+1];
               word[j+1] = temp;
           }
       }
   }

    for(int i=0;i<count;i++){
        printf("%s ",word[i]);
    }
    return 0;
}
