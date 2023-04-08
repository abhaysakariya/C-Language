//C=a*3ab+2a-b2
#include<stdio.h>
int main()
{
		int  a,b,c;
		printf("\n Enter a and b:");
		scanf("%d%d",&a,&b);
		c= a *3*a*b + 2*a - b*b;
		printf("c= %d",c);
		return 0;
}
