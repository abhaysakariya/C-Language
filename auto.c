#include<stdio.h>
int fun1()
{
	int a=20;
	printf("\n A in fun 1= %d",a);
}
int fun2()
{
	int a=30;
	printf("\n A in fun 2= %d",a);
}
int fun3()
{
	int a=40;
	printf("\n A in fun 3= %d",a);
}
int main()
{
	 static int a=10;
	printf("\n A in Main function = %d",a);
	fun1();
	fun2();
	fun3();
}
