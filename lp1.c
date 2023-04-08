#include<stdio.h>
int main()
{
	int i,r,c,n;
	printf("\n Enter the number of rows and Cols :");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
		//	printf("%3d",c);
		//	printf("%3c",r+96);
			printf("%3c",c+64);
		}
		printf("\n");
	}
	return 0;
}
