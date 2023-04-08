#include<stdio.h>
int main()
{
	/*	int a[2][3][2]={ {{1,2},{3,4},{5,6}},
						 {{2,1},{4,3},{6,5}},
						}; */
		int a[5][5][5];
		int i,j,k;
		int n;
		printf("\n Enter the size of an array:");
		scanf("%d",&n);
		printf("\n Enter array elements:");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					scanf("%d",&a[i][j][k]);
				}
			}
		}
		printf("\n*************************\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					printf("\t a[%d][%d][%d]=%d",i,j,k,a[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}
return 0;

}
