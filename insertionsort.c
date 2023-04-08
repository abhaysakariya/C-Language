#include<stdio.h>
int main()
{
		int a[20],n,temp,i,j;
		printf("\n Enter the Size of an array:");
		scanf("%d",&n);
		printf("\n Enter array elements: ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\n********************\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		for(i=1;i<n;i++)
		{
			temp=a[i];
			j=i-1;
			while(temp<a[j] && j>=0)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=temp;
		}
		printf("\n SORTING OF GIVEN ARRAY in ASCENDING ORDER \n");
		for(i=0;i<n;i++)
		{
			printf("\n\t\t\t\t%d",a[i]);
		}
	
		return 0;
}
