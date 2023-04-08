#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter any number less than 50: ");
	scanf("%d",&a);
	if(a<=50)
	{
		printf("\n Number is Less than 50.. ");
	}
	else
	{
		printf("\n OOPS....Please Enter number Less than 50..!!");
	}
	return 0;
}
