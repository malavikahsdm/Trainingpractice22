/* An array contains both positive and negative numbers in random order. Rearrange the array elements so that positive and negative numbers are placed alternatively. A number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear at the end of the array.

Example:

Input: [-1, 2, -3, 4, 5, 6, -7, 8, 9]
Output:[9, -7, 8, -3, 5, -1, 2, 4, 6]

Input: [-1, 3, -2, -4, 7, -5]
Output:[7, -2, 3, -5, -1, -4]*/






#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of arr:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<n;i++){
            if(arr[i]<0 && i%2==0){
                for(int j=i+1;j<n;j++){
                    if(arr[j]>0){
                        int temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        break;
                    }
                }
                
            }
            else if(arr[i]>0 && i%2!=0){
                for(int j=i+1;j<n;j++){
                    if(arr[j]<0){
                        int temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        break;
                    }
                }
            }
            
        }
        printf("\n");
    printf("rearranged array:");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
            printf("\n");
    return 0;
}

