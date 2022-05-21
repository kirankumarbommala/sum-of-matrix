#include <stdio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10],sum[10][10];
	printf("enter number of rows:");
	scanf("%d",&r);
	printf("enter number of columns:");
	scanf("%d",&c);
	printf("\n first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter elements of a:");
		scanf("%d",&a[i][j]);	
		}
	}
	printf("\n second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter elements of b:");
		scanf("%d",&b[i][j]);	
		}	
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
    	}
	}
	printf("\n sum of two matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",sum[i][j]);	
		}
		printf("\n");	
	}
	return(0);
}
	

