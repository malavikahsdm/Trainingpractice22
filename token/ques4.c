/*Write a program that reverses each individual word in a pipe-separated string while keeping the original order of words. For example, the input apple|banana|grape should return elppa|ananab|eparg.*/
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
       int i =0;
       int j= strlen(word[count])-1;
       
      while(i<=j){
          char temp = word[count][i];
          word[count][i] = word[count][j];
          word[count][j] = temp;
          i++;
          j--;
      }
       
       count = count + 1;
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
