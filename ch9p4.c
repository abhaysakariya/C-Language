#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="computer";
	char s2[10]="computer";
	printf("\n S1= %s \t\t  S2= %s ",s1,s2);
	printf("\nstring comparision = %d",strcmp(s1,s2));
	return 0;
}
