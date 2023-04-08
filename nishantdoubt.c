#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter any 3 numbers:  ");
	scanf("%d%d%d",&a,&b,&c);
d=(a>b && a>c) ? a :(b>a && b>c) ? b :(c>a && c>b) ? c : printf("All are equal");
printf("\n biggest number= %d",d);
}
