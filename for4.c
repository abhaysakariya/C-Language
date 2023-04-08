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
			if(r%2 != 0)
			{
				printf("%3c",r+96);
			}
			else
			{
				printf("%3c",r+64);
			}
		}
		printf("\n");
	}
}
