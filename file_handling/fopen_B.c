// open a file and read content from a file.



#include<stdio.h>
int main(){
	char content[1000];
	FILE* fp;
	fp = fopen("filename.txt","r");
	if(fp!=NULL){
	   while(fgets(content,1000,fp)){
		printf("%s",content);}
	}
	else{
		printf("file not open succcessfully");
		}
 fclose(fp);
return 0;
}
