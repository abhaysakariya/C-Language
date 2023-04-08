#include<stdio.h>
int main()
{
	char a[20][10];
	int i,n;
	printf("\n ENter number of values: ");
	scanf("%d",&n);
	printf("\n Entr Values: ");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	printf("\n Array values are: \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%s",i,a[i]);
	}
}
