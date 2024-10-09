#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
    pid_t p = fork();
	if(p==0){
		printf("i am child process\n");
		printf("child process is orphan\n");
		sleep(5);
		printf("parent process has exited\n");
	}
	else{
		printf("i am parent process\n");
		exit(0);
	}

return 0;
}
