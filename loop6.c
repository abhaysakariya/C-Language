#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter Number TO skip the loop");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		printf("\n i=%d",i);
		if(i==n)
			printf("IANT");
		continue;
	}
}
