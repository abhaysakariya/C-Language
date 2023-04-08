#include<stdio.h>
int main()
{
		int i;
		
		for(i=1;i<=10;i++)
		{
			if(i%5==0)
			{
				printf("\n %d is Divisible by 5",i);
			}
			else
			{
				printf("\n %d isNot divisible by 5",i);
			}
		}
}
