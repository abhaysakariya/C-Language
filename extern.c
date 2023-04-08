#include<stdio.h>
//#define x 100
int x=100;
int main()
{
	extern int y;
	printf("\nX =%d",x);
	printf("\nY =%d",y);	
}
y=200;
