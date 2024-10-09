#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	if(fork()==0){
		printf("hello from child\n");
	}
	else{
		printf("hello from parent\n");
		wait(NULL);
		printf("child process terminated\n");
	}

	printf("bye\n");

return 0;
}
