#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int fd;
	char buffer[200];
	fd = open("example.txt",O_RDONLY);
	if(fd == -1){
		perror("open");
		exit(EXIT_FAILURE);
	}
	ssize_t byteread = read(fd,buffer,sizeof(buffer));
	if(byteread == -1){
		perror("read");
		close(fd);
		exit(EXIT_FAILURE);
	}
	printf("%s",buffer);
	
return 0;
}
