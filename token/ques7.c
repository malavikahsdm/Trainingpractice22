/*Find Common Words: Write a program that finds and prints the common words between two pipe-separated strings. For example, given apple|orange|banana|grape and banana|kiwi|grape, the output should be banana|grape.*/
#include<stdio.h>
#include<string.h>
#define max 40
int main(){
    char string1[max];
    char string2[max];
    char *word1[max];
    char *word2[max];
    char *word[max];
    printf("enter the first pipe separated string: ");
    fgets(string1,max,stdin);
    int len1 = strlen(string1);
    if(string1[len1-1]=='\n'){
        string1[len1-1]='\0';
    }
    printf("enter the second pipe separated string:");
    fgets(string2,max,stdin);
    int len2 = strlen(string2);
    if(string2[len2-1]=='\n'){
        string2[len2-1]='\0';
    }
   char *token1 = strtok(string1,"|");
   int count1=0;
   while(token1!=NULL){
       word1[count1]=token1;
       count1 = count1+1;
       token1 = strtok(NULL,"|");

   }
   char *token2 = strtok(string2,"|");
   int count2=0;
   while(token2!=NULL){
       word2[count2]=token2;
       count2 = count2+1;
       token2 = strtok(NULL,"|");

}

for(int i =0;i<count1;i++){
    printf("%s",word1[i]);
    if(i<count1-1){
        printf("%c",'|');
    }
}
printf("\n");
for(int i =0;i<count2;i++){
    printf("%s",word2[i]);
     if(i<count2-1){
        printf("%c",'|');
    }
}
    printf("\n");

    printf("common words in both strings: ");
    int count = 0;
    int j=0;
    while(j<count2){
        for(int i =0;i<count1;i++){
            if(strcmp(word1[i],word2[j])==0){
                word[count]=word2[j];
                count = count+1;
                break;
          }

       }
       j++;
}
for(int i =0;i<count;i++){
    printf("%s",word[i]);
     if(i<count-1){
        printf("%c",'|');
    }
}
return 0;
}
