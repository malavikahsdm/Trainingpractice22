k1) Malloc :- 
  --------------------------------------------------------------------------------------------------------------------------------------------
Program : //Malloc
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main() {
       int *a;
       int n;
       printf("Enter how many elements : ");
       scanf("%d",&n);
       a = (int *)malloc(n*sizeof(int));
       if(a == NULL){
           printf("Memory allocation failed\n");
           return 1;
       }
       printf("Enter %d elements : ",n);
       for(int i=0; i<n; i++)
        scanf("%d",a+i);
        printf("The input elements in reverse order : ");
        for(int i=n-1; i>=0; i--)
            printf("%d ",*(a+i));
            free(a);
    return 0;
}
 
 
2) Malloc with strcpy function :-
  ------------------------------------------------------------------------------------------------------------------------------------------
Program : //Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
       char *str1 = NULL;
       char *str2 = NULL;
       str1 = (char *)malloc(MAX*sizeof(char));
       if(str1 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str1,0,MAX);
       str2 = (char *)malloc(MAX*sizeof(char));
       if(str2 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str2,0,MAX);
      // str1="PRIYANKA";
      strncpy(str1, "PRIYANKA", MAX - 1);
      printf("My string is : %s\n", str1);

       strncpy(str1,"Solanki",MAX-1);
      printf("My string is : %s\n",str1);
       strncpy(str2,str1,MAX-1);
       printf("My string is : %s\n",str2);
       free(str2);
       free(str1);
    return 0;
}
 
 
3) Malloc with strncat function :-
  ------------------------------------------------------------------------------------------------------------------------------------------------
Program : //Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
       char *str1 = NULL;
       char *str2 = NULL;
       char *str3 = NULL;
       str1 = (char *)malloc(MAX*sizeof(char));
       if(str1 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str1,0,MAX);
       str2 = (char *)malloc(MAX*sizeof(char));
       if(str2 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str2,0,MAX);
      // str1="PRIYANKA"; ----------------------
      strncpy(str1, "PRIYANKA", MAX - 1);
      printf("My string str1 is : %s\n", str1);

      strncpy(str1,"Solanki",MAX-1);
      printf("My string str1 after copying 'Solanki' to str1 is : %s\n",str1);
      strncpy(str2,str1,MAX-1);
      printf("My string str2 after copying str1 to str2 is : %s\n",str2);
      // ----------------------------------------
      //Concatenation of strings:-
      str3 = strncat(str1,str2,MAX-1);
      printf("\nAfter concatenation : \n\n");
      printf("My string str1 is : %s\n",str1);
      printf("My string str2 is : %s\n",str2);
      printf("my string str3 is : %s\n",str3);
      // ----------------------------------------
      //free(str3); --> Error : as both str1 and str3 have                 same value
      free(str2);
      free(str1);
    return 0;
}
 
 
4) Malloc with strncat and strncpy function :-
  ------------------------------------------------------------------------------------------------------------------------------------------------
Program : //Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
       char *str1 = NULL;
       char *str2 = NULL;
       char *str3 = NULL;
       str1 = (char *)malloc(MAX*sizeof(char));
       if(str1 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str1,0,MAX);
       str2 = (char *)malloc(MAX*sizeof(char));
       if(str2 == NULL){
           printf("Malloc failed");
           return EXIT_FAILURE;
       }
       memset(str2,0,MAX);
       //Copying of strings -----------------------------
      // str1="PRIYANKA"; 
      strncpy(str1, "PRIYANKA", MAX - 1);
      printf("My string str1 is : %s\n", str1);

      strncpy(str1,"Solanki",MAX-1);
      printf("My string str1 after copying 'Solanki' to str1 is : %s\n",str1);
      strncpy(str2,str1,MAX-1);
      printf("My string str2 after copying str1 to str2 is : %s\n",str2);
      // ----------------------------------------
      //Concatenation of strings:-
      str3 = strncat(str1,str2,MAX-1);
      printf("\nAfter concatenation : \n\n");
      printf("My string str1 is : %s\n",str1);
      printf("My string str2 is : %s\n",str2);
      printf("my string str3 is : %s\n",str3);
      printf("\nAfter copying 'Namaste' to str3 : \n\n");
      strncpy(str3, "Namaste", MAX-1);
      printf("My string str1 is : %s\n",str1); //oz both str1 and str3 are referring to same address"
      printf("My string str2 is : %s\n",str2);
      printf("my string str3 is : %s\n",str3);
      // ----------------------------------------
      //free(str3); --> Error : as both str1 and str3 have                 same value
      free(str2);
      free(str1);
    return 0;
}
 
 
5) Realloc function :-
-------------------------------------------------------------------------------------------------------------------------------------------
Program : //Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
    int *a = NULL;
    a = (int *)malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
        a[i] = i+1;
    a=(int *)realloc(a,3*sizeof(int));
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
 
 
6) Program :
//Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
    int *a = NULL;
    int *b = NULL;
    a = (int *)malloc(5*sizeof(int));
    if(a == NULL){
        printf("Malloc Failed\n");
        return 1;
    }
    for(int i=0; i<5; i++)
        a[i] = i+1;
    // Note : a = (int *)realloc(a,0*sizeof(int)) is same as deallocate the memory
    // printf("Addr of a : %u",a);
    a=(int *)realloc(a,3*sizeof(int));
    if(a == NULL){
        printf("Realloc Failed\n");
        return 2;
    }
    b=(int *)malloc(2*sizeof(int));
    printf("Addr of a : %u",a);        
    printf("\nAddr of b : %u",b);
 
    memset(b,0,2);
    for(int i=0;i<5;i++)
        printf("\n%d ",a[i]);
    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------
 
7) Program :
//Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int main() {
    int *a = NULL;
    //int *b = NULL;
    a = (int *)malloc(5*sizeof(int));
    if(a == NULL){
        printf("Malloc Failed\n");
        return 1;
    }
    for(int i=0; i<5; i++)
        a[i] = i+1;
    int *temp = (int *)realloc(a,15*sizeof(int));
    if(temp == NULL){
        printf("Realloc Failed");
        return 1;
    }
    a=temp;
    // OR we can also write as :-
    /*
    if(temp != NULL)
    {
        a = temp;
    }
    */
    // Note : a = (int *)realloc(a,0*sizeof(int)) is same as deallocate the memory
    // printf("Addr of a : %u",a);
    /*a=(int *)realloc(a,3*sizeof(int));
    if(a == NULL){
        printf("Realloc Failed\n");
        return 2;
    }
    */
   // b=(int *)malloc(2*sizeof(int));
    printf("Addr of a : %u\n",a);        
    //printf("\nAddr of b : %u",b);
    //memset(b,0,2);
    for(int i=0;i<20;i++)
        printf("%d ",a[i]);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------
8) Sum of integers using functions and dma
Prorgam :
//Malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define MAX 50
 
int* sum(int , int);
 
int main() {
    int a=5, b=6;
    int* result=sum(a,b);
    printf("The Sum = %d\n",*result);
    free(result);
    return 0;
}
int* sum(int a,int b){
    int* res=(int *)malloc(sizeof(int));
    *res=a+b;
    return res;
}
