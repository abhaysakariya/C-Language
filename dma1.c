#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	int s=0;
	printf("\n Enter Array size:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\n Enter Array Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		printf("\n Value[%d]=%d",i,*(p+i));
		s=s+ *(p+i);
	}
	printf("\n Sum of all element of an array: %d",s);
	
}
