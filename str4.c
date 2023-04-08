#include<stdio.h>
int main()
{
//	char a[10];
	char a;
	char b[10];
	
	printf("\n Enter string1: ");
	scanf("%c",&a);
	printf("\n Enter string2: ");
	scanf("%s",b);
	printf("\nB=%s \t A=%c  ",b,a);
//	printf("\n Occurance of B in A: %s",strstr(a,b));
//	printf("\n Occurange of A in B= %s",strchr(b,a));
	printf("\n strset() function=  %s",strset(b,a));	

}
