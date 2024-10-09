#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
int main(){

	  signal(SIGINT,SIG_IGN);
      for(int i=0;i<6;i++){
		printf("hello world\n");
		sleep(1);
	}
return 0;
}
