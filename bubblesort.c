#include<stdio.h>
int list[10]={9,8,7,6,5,4,3,2,1,0};
int display()
{
	int i;
	printf("[");
	for(i=0;i<10;i++)
	{
		printf("%d ",list[i]);
	}
	printf("]\n");
}
int bubblesort()
{
	int t,i,j;
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			printf("Items Compared: [%d , %d]",list[j],list[j+1]);
		if(list[j]>list[j+1])
		{
			t=list[j];
			list[j]=list[j+1];
			list[j+1]=t;
			printf("==>> Swapped[%d %d]\n",list[j],list[j+1]);
		}
		else
		{
			printf("\n==>> Not Swapped..\n");
		}
		}
		printf("\n Iteration %d",(i+1));
		display();
	}
}
int main()
{
	printf("Input Array");
	display();
	printf("\n");
	bubblesort();
	printf(" Output Array: ");
	display();
	return 0;
}
