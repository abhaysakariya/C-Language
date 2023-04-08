#include<stdio.h>
int main()
{
	//area=pi*r*r;
	float pi=3.14,area;
	float r;
	printf("enter the value of radius: ");
	scanf("%f",&r);
	printf("PI=%f \t Radius=%f",pi,r);
	area=pi*r*r;
	printf("\narea of circle is:%f",area);
	return 0;
	
}
