//passing Strings to a function
#include<stdio.h>
int array(char a[10])
{
	//int i;
/*	for(i=0;i<5;i++)
	{
		printf("\n a[%d]= %c",i,a[i]);
	} */
	printf("\n String = %s",a);
}
int main()
{
	char x[5];
	int i;
	printf("\n Enter string::");
	scanf("%s",x);
	/*for(i=0;i<5;i++)
	{
		scanf("%c",&x[i]);
	} */
	array(x);
}
