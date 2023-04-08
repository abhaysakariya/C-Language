#include<stdio.h>
int main()
{
	int day;
	printf("\n Enter Day of Week (1 to 7): ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("\n Monday");
			goto msg;
		case 2:
			printf("\n Tuesday");
			goto msg;
		case 3:
			printf("\n Wednesday");
			goto msg;
		default:
			printf("\n Invalid Input");
			goto msg;	
	}	
	msg:
		printf("\n Have a Nice Day");
}
