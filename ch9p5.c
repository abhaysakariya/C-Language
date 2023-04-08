#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	printf("\n Enter String 1: ");
	scanf("%s",s1);
	printf("\n Enter String 2: ");
	scanf("%s",s2);
	printf("\n S1= %s \t\t  S2= %s ",s1,s2);
	printf("\n Occurance of s2 into s1: %s",strstr(s1,s2));
	return 0;
}
