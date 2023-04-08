#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("\n Enter Any Number to find the factorial: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n Factorial = %d * %d",fact,i);
		fact=fact*i;
	}
	printf("\n Factorial of given number is = %d",fact);
}
