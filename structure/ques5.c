/*Student Grades
Problem: Define a structure Student with members: name, age, and grades (an array of integers). Write a program to:
 
Take input for a student’s name, age, and 5 grades.
Calculate and print the average grade.
Print the student’s details including their name, age, and average grade
*/
#include <stdio.h>

int main() { 
    typedef struct student{
        char name;
        int age;
        int grade[5];
    }STUDENT;
    STUDENT s;
    printf("enter student name:");
    scanf("%s",&s.name);
    printf("enter the age of student:");
    scanf("%d",&s.age);
    printf("enter grades of a student:");
    for(int i =0;i<5;i++){
        scanf("%d",s.grade[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum = sum+s.grade[i]
    }
    int len = sizeof(s.grade)/sizeof(s.grade[0]);
    int avg = sum/len;
    printf("name of the student:%s",name);
    printf("age of the student:%d",age);
    printf("avrage grade of student:%d",avg);
    return 0;
}


