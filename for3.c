#include<stdio.h>
int main()
{
	int n,r,c;
	printf("\n ENter the number of Row and column: ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			//printf("%3c",c+96);
			printf("%3c",c+64);
		}
		printf("\n");
	}
}
