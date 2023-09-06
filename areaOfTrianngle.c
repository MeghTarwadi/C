#include <stdio.h>

int main()
{
	float a,b,area;
	printf("\n========================================");
	printf("\n          Triangle' area");
	printf("\n========================================\n");
	printf("\n Enter hight length of triangle = ");
	scanf("%f",&a);
	printf("\n Enter base length of triangle = ");
	scanf("%f",&b);
	area=a*b*.5 ;
	printf("\n Area of triangle of hight= %.2f m & length  of %.2f m = %.2f cm \n",a,b,area);
	printf("\n========================================");
	return 0;
}

