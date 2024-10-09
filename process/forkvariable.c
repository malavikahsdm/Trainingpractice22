#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	pid_t pid;
	int a=2,x=9;
	printf("hello\n");
	pid = fork();
	if(pid==0){
		printf("value of x and a:\n");
		x = x+1;
		a = a+4;
		printf("x = %d,a = %d\n",x,a);
	}
	else{
		wait(NULL);
		printf("value of x and a in parent:\n");
		x = x+3;
		a = a+5;
		printf("x = %d,a = %d",x,a);
	}


return 0;
}
