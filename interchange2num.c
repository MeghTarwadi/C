#include <stdio.h>

int main()
{
	float a,b,c;
	printf("\n========================================");
	printf("\n       Interchange two number");
	printf("\n========================================\n");
	printf("\n Enter value of a=");
	scanf("%f",&a);
	printf("\n Enter value of b=");
	scanf("%f",&b);
	
	c=a;
	a=b;
	b=c;
	printf("\n Value of a is=%.2f",a);
	printf("\n Value of b is=%.2f \n",b);
	printf("\n========================================");
	return 0;
}

