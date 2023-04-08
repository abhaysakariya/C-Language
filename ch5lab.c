#include<stdio.h>
int main()
{
	int a,b,c,d,e,av,sum;
	printf("\n Enter A , B, C, D,E: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("\n\n A=%d \t B=%d \t C=%d \t D=%d \t E=%d",a,b,c,d,e);
	sum= a+b+c+d+e;
	printf("\nSum of all number=%d",sum);
	av=sum/5;
	printf("\n Average = %d",av);
	return 0;
}
