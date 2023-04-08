#include<stdio.h>
int main()
{
	int a[10][10],i,j,sum=0;
	int n;
	printf("\n Enter array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\n Enter array values:");
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n*****************************\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\ta[%d][%d]=%d",i,j,a[i][j]);
		sum=sum+a[i][j];
		}
		printf("\n");
	}
	
	printf("\n Sum of all element of an array: %d",sum);
	return 0;
}
