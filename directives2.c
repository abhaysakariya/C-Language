#include<stdio.h>
#define min(x,y,z)  (x<y && x<z) ? x :(y<x && y<z) ? y:z
int main()
{
	int x,y,z,a;
	printf("\n Enter X ,Y and Z: ");
	scanf("%d%d%d",&x,&y,&z);
	a=min(x,y,z);
	printf("\n Minimum = %d",a);
}
