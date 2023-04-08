#include<stdio.h>
int main()
{
		int i,n,a[10],s,l;
		printf("\n Enter array size:");
		scanf("%d",&n);
		printf("\n Enter array values:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\n****************************\n");
		for(i=0;i<n;i++)
		{
			printf("\t %d",a[i]);
		}
		l=s=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>l)
			{
				l=a[i];
			}
			if(a[i]<s)
			{
				s=a[i];
			}
		}
		printf("\nSmallest Element= %d",s);
		printf("\nLargest Element = %d",l);
		return 0;
}
