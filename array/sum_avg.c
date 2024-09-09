/*Write a program to calculate the sum and average of elements in an array.*/
#include<stdio.h>
int main(){
    int size;
	int sum = 0;
	int avg;
     scanf("%d",&size);
     int arr[size];
    for(int i=0;i<size;i++)
    {
 
      scanf("%d",&arr[i]);
 
      }
	for(int i=0;i<size;i++)
	{
	  sum = sum + arr[i];
	 }
	avg = sum / size;
	printf("sum of the elements of array:%d\n",sum);
	printf("avg of the elements of aaray:%d\n",avg);
	return 0;
	}



