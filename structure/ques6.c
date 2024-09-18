/*Library Management
Problem: Create a structure Book with members: title, author, publication_year, and copies_available. Write a program to:
 
Create an array of 3 books.
Take input from the user for each book’s details.
Print the details of all books.
Search for a book by title and update the number of copies available.*/
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct books{
        char title;
        char author;
        int public_year;
        int copies_avail;
    }BOOK;
    BOOK b[3];
    BOOK b;
    for(int i =0;i<3;i++){
        printf("enter the book title:");
        scanf("%s",&b[i].title);
        printf("enter the author name:");
        scanf("%s",&b[i].author);
        printf("enter the publication year:");
        scanf("%d",&b[i].public_year);
        printf("enter copies_available:");
        scanf("%d",&b[i].copies_avail);
    }
    for(int i =0;i<3;i++){
        printf(" title:%s",b[i].title);
        printf("author name:",b[i].author);
        printf("publication year:%d",b[i].public_year);
        printf("copies available:%d",b[i].copies_avail);
    }

    printf("enter the title of a book:");
    scanf("%s",&b.title);
    for(int i=0;i<3;i++){
    if(strcmp(b.title,b[i].title)==0){
        int n;
        printf("update available copies of book :");
        scanf("%d",&n);
        b[i].copies_avail = n;
        break;
    }

}
printf("after update available copies of given book\n");
for(int i =0;i<3;i++){
        printf(" title:%s",b[i].title);
        printf("author name:",b[i].author);
        printf("publication year:%d",b[i].public_year);
        printf("copies available:%d",b[i].copies_avail);
    }

}
