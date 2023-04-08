//z=x2 + y2+2xy
#include<stdio.h>
int main()
{
		int x,y,z;
		printf("\n Enter X and Y:");
		scanf("%d%d",&x,&y);
		z=x*x + y*y + 2*x*y;
		printf("z= %d",z);
		return 0;
}
