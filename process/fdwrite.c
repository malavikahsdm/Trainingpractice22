#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
	int fd;
  	fd = open("example.txt",O_WRONLY | O_CREAT | O_TRUNC,0666);
	if(fd==-1){
	perror("open");
	exit(EXIT_FAILURE);
    }
	write(fd,"hello form terminalh",20);
    close(fd);

return 0;
}
