#include<stdio.h>
int main()
{
	char vowel[6]={'a','e','i','o','u','\0'};
	char str[10]="NISHTHA";
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n vowel=%c ",vowel[i]);
		printf("\t Address=%u",&vowel[i]);
	}
	printf("\n Array values as string:%s",vowel);
	printf("\t Address= %u",&vowel);
	printf("\nsize of character array: %d",sizeof(vowel));
	printf("\n******************************\n\n");
	for(i=0;i<strlen(str);i++)
	{
		printf("\n str=%c ",str[i]);
		printf("\t Address=%u",&str[i]);
	}
	
	printf("\n Array values as string:%s",str);
	printf("\t Address= %u",&str);
	printf("\nsize of String array: %d",sizeof(str));
	return 0;

}
