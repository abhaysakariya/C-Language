#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("\n Enter array values:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n*****************************\n");
	for(i=0;i<10;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
		sum=sum+a[i];
	}
	printf("\n Sum of all element of an array: %d",sum);
	return 0;
}
