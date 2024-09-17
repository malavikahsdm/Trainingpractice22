// Create a structure Employee with members id, name, and salary. Write a function that takes an employee structure as an argument and prints its members.
#include<stdio.h>
#include<string.h>
struct Employee{
        int id;
        char name[20];
        int salary;
    };
    //typedef struct Employee employee;
void emp_det(struct Employee *e);
int main(){
    struct Employee e;
    emp_det(&e);
    return 0;
}
void emp_det(struct Employee *e){
    printf("enter the id of employee:");
    scanf("%d",&e->id);
    getchar();
    printf("enter the name of employee:");
    fgets(e->name,sizeof(e->name),stdin);
    e->name[strcspn(e->name,"\n")] = '\0';
    printf("enter salary");
    scanf("%d",&e->salary);
    getchar();
    
    printf("%d\n",e->id);
    printf("%s\n",e->name);
    printf("%d\n",e->salary);
}

 
