#include<stdio.h>
int main ()
{
		char s[]="IANT";
		char a[5]={'a','e','i','o','u'};
		char *cp1,*cp2;
		int i;
	
		cp1=s;
		printf("\n String Array S: ");
		for(i=0;i<strlen(s);i++)
		{
			printf("\n s[%d]=%c",i, *(cp1++));
			printf("\t Address=%u",cp1);
		}
		cp2=&a[0];
		printf("\n\n Character Array A: ");
		for(i=0;i<5;i++)
		{
			printf("\n a[%d]=%c",i, *(cp2++));
		}
		

}
