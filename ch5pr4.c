#include<stdio.h>
int main()
{
	int a,b,c,d,eq1,eq2;
	printf("\n Enter A , B, C, D: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("\n\n A=%d \t B=%d \t C=%d \t D=%d",a,b,c,d);
	eq1=(a*b)+(c/d);
	eq2=(a*b*c)+(c/d/d)-(a+b);
	printf("\n\neq1=a*b+c/d \n\n");
	printf("answer of equation1= %d",eq1);
	printf("\n\n\n");
	printf("\neq2=(a*b*c)+(c/d/d)-(a+b)\n\n");
	printf("answer of equation2= %d",eq2);
	return 0;
}
