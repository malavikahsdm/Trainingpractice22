#include <stdio.h>

int main(){
    int n;
    int s;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    int sum1=0;
    for(int i=1;i<=n;i++){
        sum1 = sum1+i;
    }
    printf("%d",sum1);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
  printf("\n");
  for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int duplicate;
    for(int i =0;i<n;i++){
        if(arr[i]==arr[i+1]){
            duplicate = arr[i];
            break;
        }
    }
    int sum =0;
    for(int i=0;i<=n;i++){
        sum = sum + arr[i];
    }
    s = sum-duplicate;
    printf("\n%d",s);
    printf("\n%d",sum1-s);
    
    return 0;
}
