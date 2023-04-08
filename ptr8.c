#include<stdio.h>
struct student
{
	char name[10];
	int roll;
	float per;
};
int main()
{
	int i; 
	struct student s1={"AAA",11,98.7};
	struct student s2={"BBB",12,67.5};
	struct student *p;
	printf("\n Details of Student-1: ");
	p=&s1;
	printf("\n Name= %s",p->name);
	printf("\n Roll NO = %d",p->roll);
	printf("\n Percentage = %f",p->per);
	
	printf("\n\n\n Details of Student-2: ");
	p=&s2;
	printf("\n Name= %s",p->name);
	printf("\n Roll NO = %d",p->roll);
	printf("\n Percentage = %f",p->per);

}
