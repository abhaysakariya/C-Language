#include<stdio.h>
int main()
{
	char Gen;
	int age;
	printf("\n Enter Your Gender :   Male(M)/Female(F):");
	scanf("%c",&Gen);
	printf("\n Enter Your Age : ");
	scanf("%d",&age);
	
	if(Gen == 'M')
	{
		if(age>=21)
		{
			printf("\n Boy is eligible for MRG.");
		}
		else
		{
			printf("\n Boy isNot eligible for MRG.");
		}
	}
	else
	{
		if(Gen=='F')
		{
			if(age>=18)
			{
				printf("\n Girl is eligible for MRG.");
			}
			else
			{
				printf("\n Girl isNot eligible fot MRG.");
			}
		}
	}
	return 0;
}
