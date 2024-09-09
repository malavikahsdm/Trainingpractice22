#include<stdio.h>
int main(){
	int size;
	int arr[size];
	printf("size of the array:");
	scanf("%d",&size);
	printf("enter elements of arr:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[i]){
			  int temp = arr[i];
			  arr[i]=arr[j];
			  arr[j]=temp;
			  }
			  }
		}
    printf("second largest element:%d",arr[size-2]);
}
