#include <stdio.h>
int main()
	{
	printf("\n ==========================================");
	printf("\n             Factorial");
	printf("\n ==========================================");

	int n,fact=1;
 	printf("\n Enter No to find its Factorial : ");
	scanf("%d",&n);
	
 	while(n>1)
 		{
  			fact=fact*n;
  			n=n-1;
 		}
		
 	printf("\n Factorial of entered no is : %d",fact);
 	
 	printf("\n ==========================================");
	return 0;
}
