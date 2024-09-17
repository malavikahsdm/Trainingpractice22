/*Write a program that splits a pipe-separated string into words and reverses the order of the words. For example, the input apple|banana|grape|orange should return orange|grape|banana|apple.*/
#include <stdio.h>
#include<string.h>
#define max 100
int main() {
   char string[max];
   char *word[max];
   int count =0;
   printf("enter a string:");
   fgets(string,max,stdin);
   int len = strlen(string);
   if(string[len-1]=='\n'){
       string[len-1]='\0';
   }
   char *token = strtok(string,"|");
   while(token!=NULL){
       word[count]=token;
       count = count + 1;
       token = strtok(NULL,"|");
   }
  int i = 0;
  int j = count-1;
  while(i<=j){
      char *temp = word[i];
      word[i] = word[j];
      word[j] = temp;
      i++;
      j--;
  }


  for(int i=0;i<count;i++){
      printf("%s",word[i]);
      if(i<count-1){
          printf("%c",'|');
      }
  }
    return 0;
}
