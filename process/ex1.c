#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>

void forkex(){
	pid_t p = fork();
	if(p < 0){
		perror("error in fork calling");
	}
	else if(p==0){
		printf("hello from child!\n");
	}
	else{
		wait(NULL);
		printf("hello from parent!\n");
	}
	}

int main(){
	forkex();
	
return 0;
}
