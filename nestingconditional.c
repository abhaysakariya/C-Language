#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter A,B,C: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n A=%d \t B=%d \t C=%d \n\n",a,b,c);
	
	(a>b && a>c) ?  printf("A is Big ") : (b>a && b>c) ?  printf("B is Big ") :  printf("C is Big");
}
