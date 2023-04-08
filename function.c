#include<stdio.h>
int div(int x,int y)
{
	int z;
	z=x/y;
	return z;
}
int main()
{
	int a,b,c;
	printf("enter A and B:");
	scanf("%d%d",&a,&b);
	c=div(a,b);
	printf("\n Division= %d",c);
	return 0;
}
