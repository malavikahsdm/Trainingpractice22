#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
void fun(int n){
	pid_t p;
	for(int i=0;i<n;i++){
		p=fork();
		
		if(p<0){
			printf("error in  creating child process\n");
			exit(1);
		}
		else if(p==0){
			printf("process id:%d\n",getpid());
			printf("parent process id:%d\n",getppid());
			exit(0);
		}
	}
	
		
			wait(NULL);
			printf("all child processes are terminated\n");
			

}
int main(){
    int n;
	scanf("%d",&n);
	fun(n);

return 0;
}
