#include <stdio.h>

int main() 
{
 	int no, sum = 0;
 	printf("\n ==========================================");
	printf("\n       Sum of first and second number");
	printf("\n ==========================================");
  		printf("\n Enter Any Number :");
		scanf("%d", & no);
  		if (no < 10)
			{
    		sum = sum + (no * 2);
  			}
  		else 
		  	{
   			sum = sum + (no % 10);
    	while (no > 9) 
			{
      		no = no / 10;
    		}
 	   		sum = sum + no;
 			}
  			printf("\n Sum of First & Last Digit is : %d", sum);
	printf("\n ==========================================");
	return 0;
	
}	
