#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		{
			printf("entr arr[%d][%d]:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("two d elements :\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==1)
			{
				printf("\n");
			}
			
			}
			
		
			
		}
	
	
	return 0;
}
