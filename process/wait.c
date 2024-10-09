#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	pid_t cid;
	pid_t p=fork();
	if(p==0){
		printf("child process successfully created\n");
		exit(0);
	}
	else{
		cid = wait(NULL);
	}	
	printf("parent process pid = %d\n",getpid());
	printf("child process pid = %d\n",cid);

return 0;
}




