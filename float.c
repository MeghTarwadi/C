#include <stdio.h>

int main()
{
	float a,b,c;
	printf("\n========================================");
	printf("\n         Addition using float");
	printf("\n========================================\n");
	printf("\n Enter value of a=");
	scanf("%f",&a);
	printf("\n Enter value of b=");
	scanf("%f",&b);
	c=a+b;
	printf("\n %.2f + %.2f = %.2f \n",a,b,c);
	printf("\n========================================");
	return 0;
}

