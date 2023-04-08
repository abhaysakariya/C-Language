#include<stdio.h>
#define a 100
int main()
{
	#undef a
	#ifdef a
		printf("\n A is Defined..");
	#else
		printf("\n A is NOT Defined..");
	#endif
		//	#define b 200
	#ifndef b
		printf("\n B is Not Defined..");
	#else
		printf("\n B is Defined..");
	#endif
		
	
}
