#include<stdio.h>
int fib(int n)
{
	if(n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}
int main()
{
	int n,i=0,r;
	printf("\n enter series: ");
	scanf("%d",&n);
	printf("\n Fibonacci series:");	
	for(r=1;r<=n;r++)
	{
		printf("\nvalue= %d",fib(i));
		i++;
	}
	return 0;
}
