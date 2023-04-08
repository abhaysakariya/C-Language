#include<stdio.h>
int main()
{
		int i,pos,flag,n,a[10],j;
		char con;
		printf("\n Enter array values:");
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\n****************************\n");
		for(i=0;i<5;i++)
		{
			printf("\t %d",a[i]);
		}

		printf("\n Enter Index that you want to search: ");
		scanf("%d",&n);
		j=a[n];
		printf("\n YOur value is= %d",j);

		
	/*	flag=0;
		printf("\n Enter number that you want to search:");
		scanf("%d",&n);
		for(i=0;i<5;i++)
		{
			if(n==a[i])
			{
				flag=1;
				pos=i;
				break;
			}
		}
		if(flag==1)
		{
			printf("\n Search is Successful\n Position of Ur number= %d",pos);
		}
		else
		{
			printf("\n Sorry..!! Search Not Successful...!");
		}
	//	printf("\nDo you want to Search again ? Y/N: ");
	//con=getch();
//	while(con=='Y' || con=='y'); */
	return 0;
		
}
