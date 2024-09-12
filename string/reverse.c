#include<stdio.h>
#include<string.h>
int main(){
	int max;
	printf("enter the size of string");
	scanf("%d",max);
	char ch =[max];
	printf("enter the string:");
	fgets(ch,max,stdin);
	len = strlen(ch);
	if (ch[len-1]=="\n"){
		ch[len-1]="\0";}
	printf("original string %s",ch);
	return 0;
	}
