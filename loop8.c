#include<stdio.h>
int main()
{
	int n,r,c;
	char ch = 'A';
	printf("\nEnter the Number of rows and columns:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
			for(c=1;c<=n;c++)
			{
				if(c==1 || c==n || r==1 || r==n)
				{
					printf("* ");
				}
				else
				{
					printf("%c ",ch++);
				}
				if(ch> 'Z')
					ch='A';
			
			}
			printf("\n");
	}
}
