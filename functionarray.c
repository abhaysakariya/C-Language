//passing array to a function
#include<stdio.h>
int array(int a[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]= %d",i,a[i]);
	}
}
int main()
{
	int x[5],i;
	printf("\n Enter array values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	array(x);
}
