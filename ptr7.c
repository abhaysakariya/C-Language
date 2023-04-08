#include<stdio.h>
int* sum(int *x,int *y)
{
	int *s;
	*s=(*x + *y);
	return s;	
}
int main()
{
	int x,y,s,*px,*py,*ps;
	printf("\n Enter X and Y:");
	scanf("%d%d",&x,&y);
	px=&x;
	py=&y;
	ps=sum(px,py);
	printf("\n Sum = %d", *ps);
}
