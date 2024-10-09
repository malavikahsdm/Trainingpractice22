#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
void alrm(int sig){
	printf("yes time to exit\n");
}

int main(){
	signal(SIGALRM,alrm);
	alarm(5);
	for(int i=0;i<5;i++){
		printf("hello world\n");
		sleep(2);	
	}

return 0;
}

