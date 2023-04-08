//Compile time Initialisation
#include<stdio.h>
int main()
{
	float fa[4]={1.2,3.4,5.6,7.8};
	int i;
	printf("\n Array elements are: \n");
	for(i=0;i<6;i++)
	{
		printf("\n fa[%d]= %f",i,fa[i]);
		printf("\t Address=%u",&fa[i]);
	}
}
