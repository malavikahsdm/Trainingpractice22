// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int max1;
    int max2;
    int max3;
    printf("size of arr1:");
    scanf("%d",&max1);
    printf("size of arr2:");
    scanf("%d",&max2);
    int count=0;
    max3 = max1+max2;
    int arr1[max1];
    int arr2[max2];
    int odd_arr[count];
    int merged_arr[max3];
   
    printf("enter the elements in arr1: ");
    for(int i = 0;i<max1;i++){
        scanf("%d",&arr1[i]);
    }
     printf("enter the elements in arr2: ");
     for(int i = 0;i<max2;i++){
        scanf("%d",&arr2[i]);
    }
    int x,y;
    for(x = 0;x<max1;x++){
        merged_arr[x]=arr1[x];
    }
    for(int y=0;y<max2;y++){
        merged_arr[x+y]=arr2[y];
    }
    printf("merged array:");
    for(int i = 0;i<max3;i++){
        printf("%d ",merged_arr[i]);
    }
  
    for(int i=0;i<max3;i++){
        if(merged_arr[i]%2!=0){
            count = count+1;
    }}
   // printf("%d",count);
        int k =0;
        int index_odd=0;
        while(k<max3){
            if (merged_arr[k]%2!=0){
                odd_arr[index_odd]=merged_arr[k];
                index_odd= index_odd+1;
            }
            k = k+1;
        
    }
    
    printf("\neven number removed from array:");
    
     for(int i = 0;i<count;i++){
        printf("%d ",odd_arr[i]);
    }
    
    for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(odd_arr[j]<odd_arr[i]){
			  int temp = odd_arr[i];
			  odd_arr[i]=odd_arr[j];
			  odd_arr[j]=temp;
			  }
			  }
		}
	printf("\nsorted array:");
	for(int i = 0;i<count;i++){
        printf("%d ",odd_arr[i]);
    }

    return 0;
}
