#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter the size : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("\n %d   \t Even",i);
	    }
	    else
	    {
	    	printf("\n %d   \t Odd",i);
		}
	}  
}
