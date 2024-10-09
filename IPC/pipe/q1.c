#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#define max 30
int main(){
pid_t pid;
int fd[2];
if(pipe(fd)==-1){
	perror("pipe");
	exit(EXIT_FAILURE);
}
pid = fork();
if(pid == 0){
 char *msg1 = "hello";
 char *msg2 = "hii";
 close(fd[0]);
 write(fd[1],msg1,strlen(msg1));
 write(fd[1],msg2,strlen(msg2));
 close(fd[1]);

}
else{
close(fd[1]);
char messege[max];
for(int i=0;i<1;i++){
read(fd[0],messege,max);
printf("%s\n",messege);
}
}
close(fd[0]);
return 0;
}
