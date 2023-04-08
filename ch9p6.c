#include<string.h>
int main()
{
	char s1[10];
	char ch1;
	printf("\n Enter character : ");
	scanf("%c",&ch1);
	printf("\n Enter String: ");
	scanf("%s",s1);
	printf("\n S1= %s \t\t  Ch1= %c ",s1,ch1);
	printf("\n Occurance of ch1 in s1 (strchr): %s",strchr(s1,ch1));
	printf("\n strset function : %s",strset(s1,ch1));
	return 0;
}
