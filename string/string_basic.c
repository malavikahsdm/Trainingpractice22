#include<stdio.h>
#include<string.h>
#define MAX 5
int main()
{
   char ch[MAX];
   int len;
   printf("enter a string :");
   fgets(ch,MAX,stdin);
   len = strlen(ch);
   if(ch[len-1]=='\n')
   		ch[len-1] = '\0';
   printf("%s",ch);
   
   return 0;
}


