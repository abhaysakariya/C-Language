#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,m;
	int s=0;
	printf("\n Enter Array size:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\n Enter the new size of an array: ");
	scanf("%d",&m);
	p=realloc(p,m);
	printf("\n Enter Array Elements: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<m;i++)
	{
		printf("\n Value[%d]=%d",i,*(p+i));
		s=s+ *(p+i);
	}
	printf("\n Sum of all element of an array: %d",s);
}
	
