#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE* ptr;
	ptr = fopen("filename.txt","a");
	if(ptr==NULL){
		printf("file does not exist");
		exit(0);
		}
    else{
	  fprintf(ptr,"hello world from terminal");
	
	}



return 0;
}
