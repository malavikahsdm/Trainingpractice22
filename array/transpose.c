#include<stdio.h>
int main(){
 	int ROW;
	printf("enter row:");
    scanf("%d",&ROW);
	int COL;
	printf("col:");
	scanf("%d",&COL);
	int arr2d[ROW][COL];
	int arrT[COL][ROW];
	for(int i =0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			scanf("%d",&arr2d[i][j]);
			}
		}

    printf("original arr:\n");    		
	for(int i =0;i<ROW;i++){
		for(int j=0;j<COL;j++){
	       printf("%d ",arr2d[i][j]);
		   
		   }
		 printf("\n");
	}

	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			arrT[j][i]=arr2d[i][j];
	
	}}
	printf("transpose\n");
    	
	for(int i =0;i<ROW;i++){
		for(int j=0;j<COL;j++){
	       printf("%d ",arrT[i][j]);
		   
		   }
		printf("\n");}

		   
	return 0;
	}
	
	
