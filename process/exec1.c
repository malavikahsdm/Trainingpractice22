#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	pid_t pid;
	pid = fork();
	if(pid == -1){
		printf("error in creation of child process");
	}
	if(pid==0){
		printf("hello from child");
		execl("/bin/ls","ls","-l",(char *)0);
		printf("hello from child");
		perror("exec failed");
		exit(EXIT_FAILURE);
	}
	else{
		printf("hello from parent");
	}


return 0;
}
