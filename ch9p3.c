#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	int len;
	printf("\n Enter String 1: ");
	scanf("%s",s1);
	printf("\n Enter String 2: ");
	scanf("%s",s2);
	printf("\n S1= %s \t\t  S2= %s ",s1,s2);
	len=strlen(s1);
	printf("\n Length of s1= %d",len);
	printf("\n S1 in Lower Case= %s",strlwr(s1));
	printf("\n S2 in Upper Case= %s",strupr(s2));
	printf("\n S1= %s \t\t  S2= %s ",s1,s2);
	printf("\n Concatenation of S1 and S2= %s",strcat(s1,s2));
	printf("\n Copy of s2 in s1: %s",strcpy(s1,s2));
	return 0;
	return 0;
}
