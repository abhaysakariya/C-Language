//Pointer and Array;
#include<stdio.h>
int main()
{
	int a[]={11,22,33,44,55};
	int *p,i;
	p=&a[0];
	for(i=0;i<5;i++)
	{
		//printf("\n a=%d",*(a+i));
		printf("\n a=%d",*p++);
		printf("\t Address= %u",p);
	}
}
