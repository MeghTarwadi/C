#include<stdio.h>
int main() 
{
	printf("\n ===============================================");
	printf("\n \a Evaluate the series 1^2+2^2+3^2+...+n^2");
	printf("\n ===============================================");
  	int n, i, sum = 0;
  	printf("\n Enter Value of n : ");
 	scanf("%d", & n);
  		for (i = 1; i <= n; i++) 
		{
 		   sum = sum + (i * i);
		}
  	printf("\n Sum of Series = %d", sum);
  	return 0;
  	printf("\n ===============================================");
}
