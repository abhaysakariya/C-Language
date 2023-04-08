//Nesting of Structure.
#include<stdio.h>
struct student
{
	char name[10];
	int roll;
	struct marks
	{
		int maths;
		int science;
	}m1,m2;
}s1,s2;
int main()
{
	strcpy(s1.name,"Xyz");
	s1.roll=101;
	s1.m1.maths=90;
	s1.m1.science=76;
	printf("\n Name = %s",s1.name);
	printf("\n RollNo= %d",s1.roll);
	printf("\n Marks of Maths= %d",s1.m1.maths);
	printf("\n Marks of Science= %d",s1.m1.science);
}
