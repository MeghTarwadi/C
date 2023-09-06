#include <stdio.h>
void main()
{
	float km,m,f,i;
	printf("\n========================================");
	printf("\n        Unit conversation");
	printf("\n========================================\n");
	printf("\n Enter the length in meter=");
	scanf("%f",&m);
	km=m*.0001;
	printf("\n Length in kms=%.3f\n",km);
	f=m*3.33;
	printf("\n Length in foots=%.2f\n",f);
	i=m*40;
	printf("\n Length in inches=%.2f\n",i); 
	printf("\n========================================");
}
