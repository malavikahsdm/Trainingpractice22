/*Write a program to initialize an array with the first 10 natural numbers and print the elements.*/
#include<stdio.h>
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
	 arr[i]=i+1;
	 }
	for(int i=0;i<10;i++){
	   printf("%d ",arr[i]);
	   }

	 return 0;
}
