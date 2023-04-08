#include<stdio.h>
struct hotel
{
	char d_name[10];
	int price;
};
int display(struct hotel h[10],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\n\n Dish Name=%s",h[i].d_name);
		printf("\t Dish Price=%d",h[i].price);
	}
}
int main()
{
	int i,n;
	struct hotel h1[10];
	printf("\n Enter the number of dishes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter the Name and Price of Dish[%d]:",i);
		scanf("%s",h1[i].d_name);
		scanf("%d",&h1[i].price);
	}
	display(h1,n);
	return 0;
}
