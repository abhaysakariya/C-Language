//Print tables from 1 to 10
#include<stdio.h>
int main()
{
		int mul,i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
		mul= i*j;	
		printf("%d * %d = %d\t",i,j,mul );
		}
		printf("\n");
	}
}
