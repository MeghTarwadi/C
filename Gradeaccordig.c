#include <stdio.h>
int main()
{
	int a;
	printf("\n========================================");
	printf("\n          Students's grade");
	printf("\n========================================\n");
	printf("\n Enter marks = ");
	scanf("%d",&a);
	
	if (a>79)
	{
		printf("\n Student gained *Distinction* \n");
	}
	else if (a>59)
	{
		printf("\n Student gained *First Class* \n");
	}
	else if (a>39)
	{
		printf("\n Student gained *Second Class* \n");
	}
	else
	{
		printf("\n Student is *Fail* \n");
	}
	printf("\n========================================");
	return 0;
}
