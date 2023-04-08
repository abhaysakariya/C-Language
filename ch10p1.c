#include<stdio.h>
int show()
{
	printf("\nThis is User-Defined Function");
	return 0;
}
int display()
{
	printf("\n This is Another User-defined function");
	show();
	return 0;
}
int main()
{
	 show();
	printf("\n\n***********************************\n");
	printf("\n This is Built-In Function..");
	
	printf("\n\n");
	display();
	
	//show();	// Function call;
	return 0;
}
