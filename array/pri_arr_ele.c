/*Write a program to read and print array elements( using index and using address)*/
#include<stdio.h>
#define max 6
int main()
{  
    int arr[max];
	
	for(int i=0;i<max;i++){
		scanf("%d",&arr[i]);
		}
	printf("element using index\n");

	for(int i=0;i<max;i++)
	{
	  printf("%d ",arr[i]);
	 }
    printf("print element by address\n");
	for(int i=0;i<max;i++)
	{
	  printf("%d ",*(arr+i));
	 }

	return 0;
	}

   

