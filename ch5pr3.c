#include<stdio.h>
int main()
{
		int n=100;
		float f=67.8;
		char ch='Z';
		/*printf("\n size of integer = %d",sizeof(n));
		printf("\n size of float = %d",sizeof(f));
		printf("\n size of character = %d",sizeof(ch));*/
		
		printf("\n Address of integer n= %u",&n);
		printf("\n Address of float f = %u",&f);
		printf("\n Address of character ch= %u",&ch);
		return 0;
		
}
