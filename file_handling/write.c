#include<stdio.h>
int main(){
	FILE* fp;
	fp = fopen("filename.txt","w");
	if(fp!=NULL){
		fputs("new messege",fp);
	}
	else{
		printf("file not opened");
}
fclose(fp);
   char messege[100];
   fp=fopen("filename.txt","r");
   if(fp!=NULL){
   		fgets(messege,100,fp);
		printf("%s",messege);}
   else{
   		printf("file not opened");}
fclose(fp);
   fp = fopen("filename.txt","a");
   if(fp==NULL){
   printf("erroe in file opening");}
  fprintf(fp," new messege 1");
   fclose(fp);
	return 0;
}
