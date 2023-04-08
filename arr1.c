//Compile time Initialisation
#include<stdio.h>
int main()
{
	int my[5]={10,20,30,40,50};
	int i;
	printf("\n Array elements are: \n");
	for(i=0;i<5;i++)
	{
		printf("\n my[%d]=%d",i,my[i]);
		printf("\t Address=%u",&my[i]);
	}
}
