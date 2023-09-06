#include <stdio.h>
int main() 
 {
 	int a;
 	printf("\n========================================");
 	printf("\n             Even or odd");
 	printf("\n========================================\n");
 	
	printf("\n Enter any Number : ");
 	scanf("%d",&a);
 	
 	
 		if( (a%10)%2==0 )
 		
 		{
  			printf("\n Last Digit of Number is Even");
 		}
 		
 		else
		{
  			printf("\n Last Digit of Number is Odd");
 		}
 		
	 return 0;
 }
