#include<stdio.h>
struct emp
{
	char name[10];
	int Id;
	int sal;	
};
int main()
{
	int i,n;
	struct emp e[100];
	printf("\n Enter Number of Employee:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter Name,Id and Salary of Employee [%d]",i);
		scanf("%s",e[i].name);
		scanf("%d",&e[i].Id);
		scanf("%d",&e[i].sal);
	}
	printf("\n Employee Details\n\n");
	for(i=1;i<=n;i++)
	{
		printf("\n Details of Employee [%d] = ",i);
		printf("\tName= %s",e[i].name);
		printf("\tId=%d",e[i].Id);
		printf("\tSalary=%d",e[i].sal);
	}
	return 0;
}
