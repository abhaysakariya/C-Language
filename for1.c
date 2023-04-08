#include<stdio.h>
int main()
{
	int n,r,c;
	printf("\n Enter The number of Rows and Col : ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
