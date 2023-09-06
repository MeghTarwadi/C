#include<stdio.h>
int main()
{
 float a;
 printf("========================================");
 printf("\n          Salary slip");
 printf("\n========================================\n");
 printf("\n Enter Basic Salary :");
 scanf("%f",&a);
 printf("\n Basic: %.2f",a);
 printf("\n DA: %.2f",a*0.10);
 printf("\n HRA: %.2f",a*0.075);
 printf("\n MA: %.2f",300.00);
 printf("\n Gross: %.2f",a+(a*0.10)+(a*0.075)+300.00);
 printf("\n PF: %.2f",a*0.125);
 printf("\n NET: %.2f \n",(a+(a*0.10)+(a*0.075)+300.00)-(a*0.125));
 printf("\n========================================");
 return 0; 
}
