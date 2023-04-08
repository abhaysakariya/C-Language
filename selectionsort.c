#include<stdio.h>
int list[10]={9,5,2,8,0,6,1,3,7,4};
int line(int count)
{
	int i;
	for(i=0;i<count-1;i++)
	{
		printf("=");
	}
	printf("\n");
	
}
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
int selectionsort()
{
	int min,i,j,t;
	for(i=0;i<10-1;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(list[j] < list[min])
			{
				min=j;
			}
		}
		if(min !=i )
		{
			printf("Iteams swapped: [ %d  ,  %d]\n",list[i],list[min]);
			t=list[min];
			list[min]=list[i];
			list[i]=t;
		}
		printf("\n Iteration  %d-->",(i+1));
		display();
	}
}
int main()
{
	printf("Input Array");
	display();
	line(50);
	selectionsort();
	printf(" Output Array: ");
	display();
	line(50);
	return 0;
}
