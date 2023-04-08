//Print the sum of given digits.
#include<stdio.h>
int main()
{
	int n,s=0,rem;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	printf("\n  \t\tNumber = %d",n);
	while(n>0)
	{
		rem=n%10; 
		s=s+rem;
		n=n/10;
	}
	printf("\n Sum of Given digit = %d",s);
}
