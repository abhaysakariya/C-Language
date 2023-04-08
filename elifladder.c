#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter A,B,C: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n A=%d \t B=%d \t C=%d \n\n",a,b,c);
	if(a>b && a>c)
	{
		printf("\n A is Big with value %d",a);
	}
	else if(b>a && b>c)
	{
		printf("\n B is Big with value %d",b);	
	}
	else if(c>a && c>b)
	{
		printf("\n C is Big with value %d",c);
	}
	else
	{
		printf("\n All are Equal");
	}
}
