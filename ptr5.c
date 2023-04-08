// Array of Pointer
#include<stdio.h>
int main()
{
		int i;
		int *p[5]={11,22,33,44,55};
		printf("\n Array values \n");
		for(i=0;i<5;i++)
		{
			printf("\n p[%d]=%d",i,p[i]);
		}
}
