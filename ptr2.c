#include<stdio.h>
int main()
{
	int a=10,b=5,x,y,z;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	x= *p1 * *p2 - 6;
	y= 4 *  *p2 + *p1 /2;
	*p2 = *p2+3;  //*p2= 5+3  =8 
	*p1 = *p2-5;
	z= *p1 * *p2 - 6;
	printf("\n X= %d \t Y=%d",x,y);
	printf("\n *p1 = %d \t *p2=%d",*p1,*p2);
	printf("\n Z=%d",z);
}
	
