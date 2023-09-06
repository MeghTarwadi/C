#include <stdio.h>

int main()
{
	printf("\n========================================");
	printf("\n             Calculator");
	printf("\n========================================\n");
	float a,b,plus,minus,multi,devi;
	printf("\n Enter value of a=");
	scanf("%f",&a);
	printf("\n Enter value of b=");
	scanf("%f",&b);
	plus=a+b;
	printf("\n %.2f + %.2f = %.2f \n",a,b,plus);
	minus=a-b;
	printf("\n %.2f - %.2f = %.2f \n",a,b,minus);
	multi=a*b;
	printf("\n %.2f x %.2f = %.2f \n",a,b,multi);
	devi=a/b;
	printf("\n %.2f / %.2f = %.2f \n",a,b,devi);
	printf("\n========================================");
	return 0;
}

