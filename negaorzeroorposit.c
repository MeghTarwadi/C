#include <stdio.h>
void main()
{
	float a;
	printf("\n========================================");
	printf("\n         Identify digit type");
	printf("\n========================================\n");
	printf("\n Enter number = ");
	scanf("%f",&a);
	
	if (a==0)
	{
		printf("\n Given number is *zero* \n");
	}
	else if (a>0)
	{
		printf("\n Given number is *positive* \n");
	}
	else
	{
		printf("\n Given number is *negative* \n");
	}
	printf("\n========================================");
}
