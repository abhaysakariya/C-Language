//STRING ARRAY
#include<stdio.h>
int main()
{
		int i,n;
		char s[20][10];
		printf("\n Enter Number of Row and Col:");
		scanf("%d",&n);
		printf("\n Enter Elements:");
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}
		
		printf("\n Array Elements:   \n");
		for(i=0;i<n;i++)
		{
			printf("\ns[%d]= %s",i,s[i]);
		}
		return 0;
}
