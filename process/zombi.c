#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	pid_t pid = fork();
	if(pid==0){
		printf("hello from child");
		exit(0);
	}
	else{
		printf("hello from parent");
		sleep(5);
	}

return 0;
}
