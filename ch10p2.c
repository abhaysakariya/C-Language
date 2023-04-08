#include<stdio.h>
int sum(int a,int b);  //declaration
int main()
{
		int x,y,z;
		z=sum(12,11);
		printf("Sum = %d",z);
		printf("\n Enter X and Y: ");
		scanf("%d%d",&x,&y);
		z=sum(x,y);
		printf("Sum = %d",z);
		return 0;
}
int sum(int a,int b)
{
	int c;

	c=a+b;
	return c;
}
