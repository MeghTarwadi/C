#include <stdio.h>
void main()
{
	float a,b;
	printf("\n========================================");
	printf("\n       Temprature calculation");
	printf("\n========================================\n");

	printf("\n Enter temperrature in centigrade = ");
	scanf("%f",&a);
	b=1.8*a+32;
	printf("\n Temperature in fahrenhit = %f \n",b);
	printf("\n========================================");
}
