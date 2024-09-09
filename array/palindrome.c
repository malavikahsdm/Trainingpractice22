#include<stdio.h>
int main(){
	int n;
	int arr[n];
	int f = 0;
	printf("enter size of arr:");
    scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	int i=0;
	int j=n-1;
	while(i<=j){
		if(arr[i]==arr[j]){
			f = 1;
		}
		else{
		  f = 0;
		  }
		i = i+1;
		j = j-1;
	 }
	if(f=1){
	  printf("arr is palindrome");
	  }
	 else{
	  printf("arr is not palindrome");
	  }
			
    return 0;
	}
