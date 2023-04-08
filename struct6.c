#include<stdio.h>
struct bit
{
	unsigned n :2;  //bitfield
}d1;
int main()
{
	d1.n=10;
	printf("\n size of d1= %d",sizeof(d1));
	printf("\n d1.n= %d",d1.n);
}
