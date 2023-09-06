#include <stdio.h>
int main()
{
	int a;
	printf("\n========================================");
	printf("\n          Students's result");
	printf("\n========================================\n");
	printf("\n Enter marks = ");
	scanf("%d",&a);
	
	if (a<32)
	{
		printf("\n Student is *failed* \n");
	}

	else
	{
		printf("\n Student is *passed* \n");
	}
	printf("\n========================================");
	return 0;
}
