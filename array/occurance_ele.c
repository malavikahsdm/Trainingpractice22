#include<stdio.h>
#define MAX 5
int main(){
	int arr[MAX];
	int arr1[MAX];
	for(int i =0;i<MAX;i++){
		scanf("%d",&arr[i]);
		}
	
	for(int i=0;i<MAX;i++){
	    if(arr1[i]==1){
	        continue;
	    }
		int count = 0;
		for(int j=0;j<MAX;j++){
			if(arr[i]==arr[j]){
				count = count+1;
				arr1[j]=1;
		}}
		printf("occurance of %d is %d \n",arr[i],count);
		
		}
	return 0;
	
	}
