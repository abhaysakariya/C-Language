#include<stdio.h>
int main()
{
	FILE *fp;
	int a=100;
	char ch[100], str[300];
	char *fname="lesson13.txt";
	fp=fopen(fname,"a");
	printf("\n ENter ANy text: ");
	gets(ch);
	printf("\n Entered Text= ");
	puts(ch);
	fputs(ch,fp);
	fclose(fp);
	
	fp=open(fname,"r");
	if(fp==NULL)
	{
			printf("\n Could not open the file..");
	}
	printf("\n ****************READING DATA***************\n");
	while(fgets(str,a,fp)!=NULL)
	{
		printf("%s",str);
		fclose(fp);
	}
}
	
