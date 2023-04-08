#include<stdio.h>
#include<conio.h>
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("\n  Swapping : \n\n X=%d \t\t Y=%d ",*x,*y);
}
int main()
{
	int x,y;
	printf("\n Enter X and Y: ");
	scanf("%d%d",&x,&y);
	printf("\nBefore Swapping : \n\n X=%d \t\t Y=%d ",x,y);
	swap(&x,&y);
	printf("\nAfter Swapping : \n\n X=%d \t\t Y=%d ",x,y);
	return 0;
}
