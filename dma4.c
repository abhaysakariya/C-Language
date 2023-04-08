//Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int n;	
};
int main()
{
	int i,j;
	struct node a[10];
	printf("\n Enter the size of an array: ");
	scanf("%d",&j);
	printf("\n**********Enter Elements**********\n");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i].n);
	}
	printf("\n Linked List \n");
	for(i=0;i<j;i++)
	{
		printf("%d-->",a[i].n);
	}
}
