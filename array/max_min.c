/* Write a program to find the maximum and minimum elements in an array of integers.*/
#include<stdio.h>
  
int main(){
  int size;
  scanf("%d",&size);
  int arr[size];

  int max =arr[0];
  int min =arr[0];
  for(int i=0;i<size;i++)
  {

  	scanf("%d",&arr[i]);

	}
  printf("\n");
  for(int i=0;i<size;i++)
  {
  	if (arr[i]>=max){
	  max = arr[i];
	  }
	}
  
  printf("max number in an array: %d\n",max);
  for(int i=0;i<size;i++){
      if (arr[i]<=min){
	     min = arr[i];
	}
	}
  
  printf("min number in an array:%d\n",min);
	return 0;
}
