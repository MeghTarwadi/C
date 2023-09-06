#include <stdio.h>

int main()
{
	float i,p,r,n;
	printf("\n========================================");
	printf(" \n           Simple interest");
	printf("\n========================================\n");
	printf("\n Principal amount=");
	scanf("%f",&p);
	printf("\n Rate of interest=");
	scanf("%f",&r);
	printf("\n Number of years=");
	scanf("%f",&n);
	i = (p*r*n)/100;
	printf("\n Interest=%.2f \n",i);
	printf("\n========================================");
	return 0;
}
