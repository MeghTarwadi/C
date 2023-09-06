#include <stdio.h>
void main()
{
	float u,a,t,d;
	printf("\n========================================");
	printf("\n  Distance finder from known quantity");
	printf("\n========================================\n");
	printf("\n Enter speed of object= ");
	scanf("%f",&u);
	printf("\n Enter acceleration of object= ");
	scanf("%f",&a);
	printf("\n Enter taken time by object= ");
	scanf("%f",&t);
	d=u*t+a*t*t;
	printf("\n Distance travelled by object=%.3f\n" ,d);
	printf("\n========================================");
}
