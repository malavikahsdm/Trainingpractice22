#include<stdio.h>
int main(){
    int num1;
	int num2;
	char string[30];
	FILE* fp;
	fp=fopen("file.txt","r");
	if(fp==NULL){
		printf("error in file opening");
		return 1;
	}
	else{
		fscanf(fp,"%d %d %s",&num1,&num2,string);
	
	}
   printf("%d %d %s",num1,num2,string);

	fclose(fp);
return 0;
}

