//Compile time Initialisation
#include<stdio.h>
int main()
{
	char vowel[5]={'a','e','i','o','u'};
	int i;
	printf("\n Array elements are: \n");
	for(i=0;i<5;i++)
	{
		printf("\n vowel[%d]= %c",i,vowel[i]);
		printf("\t Address=%u",&vowel[i]);
	}
}
