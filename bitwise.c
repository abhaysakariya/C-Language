#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter A and B:");
	scanf("%d%d",&a,&b);
	printf("\n A=%d \t B=%d",a,b);
	printf("\n***************************\n");
	printf("\n A&B = %d",a&b);
	printf("\n A|B = %d",a|b);
	printf("\n A^B = %d",a^b);
	printf("\n A<<2= %d",a<<2);
	printf("\n A>>2= %d",a>>2);
	return 0;
	
}
