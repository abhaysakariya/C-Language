#include<stdio.h>
int main()
{
	int a[5][5] , b[5][5] ,ad[5][5],sub[5][5],mul[5][5];
	int i,j,k,n;
	printf("\n enter size of an array:");
	scanf("%d",&n);
	printf("\n Enter the Elements of 1st Matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the Elements of 2nd Matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n 1st Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n 2nd Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t b[%d][%d]=%d",i,j,b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ad[i][j] = a[i][j] + b[i][j];
			sub[i][j] = a[i][j] - b[i][j];
			mul[i][j]=0;
			for(k=0;k<n;k++)
			{
				mul[i][j]=mul[i][j]	+ (a[i][k] * b[k][j]);
			}
		}
	}
	printf("\n************Addition************** \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t ad[%d][%d]=%d",i,j,ad[i][j]);
		}
		printf("\n");
	}
	printf("\n************Subtraction************** \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t sub[%d][%d]=%d",i,j,sub[i][j]);
		}
		printf("\n");
	}
	
	printf("\n************Multipliction************** \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t mul[%d][%d]=%d",i,j,mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
