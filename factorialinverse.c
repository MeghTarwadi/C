#include<stdio.h>
int main() 
{
	int n, i, j, fact = 1;
	printf("\n ===============================================");
	printf("\n	 1+1/2!+1/3!+1/4!+…..+1/n!");
	printf("\n ===============================================");
		float sum = 0;
		printf("\n Enter Value of n : ");
		scanf("%d", & n);
  		for (i = 1; i <= n; i++) 
		  	{
    		fact = 1;
    			for (j = i; j > 0; j--)
				{
      				fact = fact * j;
    			}
    		sum = sum + (1.0 / fact);
			}
printf("\n Sum of Series = %f", sum);
return 0;
}
