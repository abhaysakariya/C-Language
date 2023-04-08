#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *p;
//	printf("\n A= %d",a);
	printf("\n Address of A= %u",&a);
	p=&a;
	printf("\n Address of *p after assigning A = %u",p);
	p=&b;
	printf("\n Address of B= %u",&b);
	printf("\n Address of *p after assigning B = %u",p);
	
}
