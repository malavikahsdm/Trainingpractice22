#include<stdio.h>
int add(int a,int b){
	return a+b;
	}
int sub(int a,int b){
	return a-b;
	}
int multi(int a,int b){
	return a*b;
	}
int divi(int a ,int b){
	return a/b;
	}
int main(){
	int (*operation)(int,int);
	operation = add;
	int result = operation(5,6);
	printf("%d",result);
	return 0;}

