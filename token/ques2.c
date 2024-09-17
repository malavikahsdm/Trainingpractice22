/*Write a program that Finds the unique words from a pipe-separated string.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int main(){
    char string[max];
    char *word[max];
    int  count=0;
    fgets(string,max,stdin);
    int len = strlen(string);
    if(string[len-1]=='\n'){
        string[len-1]='\0';
    }
   // printf("%s",string);
    char *token = strtok(string,"|");
    while(token!=NULL){
        int found=0;
        for(int i =0;i<count;i++){
            if(strcmp(word[i],token)==0){
                found=1;
                
                break;
            }
        }
        
        if(!found){
            word[count]=token;
            count = count+1;
        }
        token=strtok(NULL,"|");
    }
    
    for(int i=0;i<count;i++){
        printf("%s\n",word[i]);
    }
    return 0;
    
}
