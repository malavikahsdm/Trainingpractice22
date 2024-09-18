/*Given an array of elements of length N, ranging from 0 to N – 1. All elements may not be present in the array. If the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.*/
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(arr[j]==i){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
    }
    for(int i =0;i<n;i++){
        if(arr[i]!=i){
            arr[i]=-1;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
