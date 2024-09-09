#include<stdio.h>
int main()
{
	//int row;
	//int col;
	/*scanf("%d",&row);
	scanf("%d",&col);
	int arr[row][col];
	printf("enter the values of arr:");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
			}
		printf("\n");
		}
	
        
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
			}
		printf("\n");
		}

	*/
	 int arr[2][3] = {{1,2,5,4},{2}};
	 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			}
		printf("\n");
		}
	return 0;
	}
	
