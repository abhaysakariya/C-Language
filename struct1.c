#include<stdio.h>
struct student
{
	int id;
	char name[10];
	float per;
}s1,s2;
int main()
{
//	struct student s1={101,"Xyz",98 };
//	struct student s2={102,"Abc",85.45};

	printf("\n Enter Id Name and Percentage of student1:");
	scanf("%d",&s1.id);
	scanf("%s",s1.name);
	scanf("%f",&s1.per);
	
	printf("\n Enter Id Name and Percentage of student2:");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%f",&s2.per);

	printf("\n Details of Student-1:");
	printf("\n Id= %d",s1.id);
	printf("\t Name= %s",s1.name);
	printf("\t Percentage= %f",s1.per);
	
	printf("\n\n\n Details of Student-2:");
	printf("\n Id= %d",s2.id);
	printf("\t Name= %s",s2.name);
	printf("\t Percentage= %f",s2.per);  
	
}
