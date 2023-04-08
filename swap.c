#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter A and B: ");
	scanf("%d%d",&a,&b);
	printf("\n\t\t A=%d \t\t B= %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\t\t A=%d \t\t B= %d",a,b);
	return 0;
	
}
