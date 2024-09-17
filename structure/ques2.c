/*Create a structure Book with members: title, author, and price. Create an array of 5 books and take input from the user for each book's details. Finally, print the details of all books.*/
#include<stdio.h>
#include<string.h>
 int main(){
     struct Book{
        char title[30];
        char author[20];
        int price;
     };
     typedef struct Book book;
     book s[5];
     for(int i=0;i<5;i++){
         printf("enter the details for %d book:\n",i+1);
         printf("enter the book title:");
         fgets(s[i].title,sizeof(s[i].title),stdin);
         if(s[i].title[strlen(s[i].title)-1]=='\n'){
             s[i].title[strlen(s[i].title)-1]='\0';
         }

         printf("enter the author name of the book:");
         fgets(s[i].author,sizeof(s[i].author),stdin);
         if(s[i].author[strlen(s[i].author)-1]=='\n'){
             s[i].author[strlen(s[i].author)-1]='\0';
         }

         printf("enter the price of book:");
         scanf("%d",&s[i].price);
         getchar();
     }
     printf("\nall book details:\n");
     for(int i=0;i<5;i++){
         printf("details of %d book:"i+1);
         printf("the title of book :%s\n",s[i].title);
         printf("name of the author of the book:%s\n",s[i].author);
         printf("the price of book :%d\n",s[i].price);

     }
     return 0;
 }
