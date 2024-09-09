#include<stdio.h>
int main(){
	int size;
	int arr[size];
    printf("enter size of arr");
	scanf("%d",&size);
    
	printf("enter element in arr:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
		
	printf("original  arr:");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				for(int k=j;k<size;k++){
					arr[k]=arr[k+1];
                }
				j=j-1;
				size=size-1;
			}
		}
	}
	
	printf("after removing duplicate arr:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
}		
   printf("\n");
    return 0;
}
