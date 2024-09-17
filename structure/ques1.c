/*Write a program to define a structure called Student with members: name, age, and grade. Create an instance of this structure and take input from the user for each member, then print the values.*/
 #include<stdio.h>
 #define max 20
 int main(){
     struct student{
       char name[max];
       int age;
       char grade;
       };
     typedef struct student STUDENT;
     STUDENT s;
     printf("enter the name:");
     scanf("%s",s.name);
     printf("enter the age:");
     scanf("%d",&s.age);
     getchar();
     printf("enter the grade:");
     scanf("%c",&s.grade);
     printf("name:%s\n",s.name);
     printf("age:%d\n",s.age);
     printf("grade:%c\n",s.grade);
     return 0;
 }
