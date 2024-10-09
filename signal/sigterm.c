#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
void term(int sig){
 printf("program is terminated gracefully\n");
 exit(0);
}
int main(){
	signal(SIGTERM,term);
	while(1){
	printf("hello world\n");
	sleep(1);
	}
return 0;
}
