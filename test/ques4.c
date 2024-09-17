// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int max;
    printf("enter the size of string:");
    scanf("%d",&max);
    getchar();
    char str[1][max];
    fgets(str[1],max,stdin);
    int len = strlen(str[1]);
    if(str[1][len-1]=='\n'){
        str[1][len-1]='\0';
    }
    // printf("%c\n",str[1][0]);
    // printf("%s\n",str[1]);
 //   int k=0;  
   // int count=0;
    //while(k<max){
      //  if(str[1][k]==' '||'\0'){
        //    count = count+1;
       // }
       // k++;   
        //}
        
     //printf("%d",count);
    int i=0;  
    while(i<max){
        if(str[1][i]==' '||'\0'){
           str[1][i-1]= toupper(str[1][i-1]);
        }
        i++;   
        }
    printf("\n");
    printf("%s",str[1]);

    return 0;
}
