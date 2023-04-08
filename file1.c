#include<stdio.h>
int main()
{
	FILE *fp;
	int a=100;
	char ch[100];
	char *fname="hi.txt";
	int i;
	fp=fopen(fname,"w"); //open the file;
		for(i=1;i<=10;i++)
		{
		fprintf(fp,"\nThis is line %d",i);
		}
		fclose(fp);
		
		
	fp=fopen(fname,"r");
	if(fp==NULL)
	{
		printf("\n Could not Open the File");
	}
	printf("\n READIG DATA OF FILE\n");
	while(fgets(ch,a,fp) !=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);
}
