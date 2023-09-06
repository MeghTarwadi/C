#include <stdio.h>

int main() 
{
  	int i, j,a,b,c,d,e,f;
  		for (i = 0; i < 5; i++) 
		{
    			for (j = 0; j <= i; j++) 
				{
      			printf("%d", j + 1);
    			}
    	printf("\n");
  		}
  		
  	printf("\n\n\n\n");
  		for (a = 0; a < 5; a++)
		{
    			for (b = 0; b < 5 - a; b++)
				{
      			printf("%d", b + 1);
    			}
    	printf("\n");
  		}
  		
  	printf("\n\n\n\n");
  		
  	for (c = 0; c < 5; c++) 
	  	{
    		for (d = 0; d < 5 - c; d++) 
			{
     		 	printf("%d", 5 - c);
    		}
    	printf("\n");
  		}
  		
  	printf("\n\n\n\n");
  	
  	for (e = 0; e < 5; e++) 
	  {
    	for (f= 0; f <= e; f++) 
		{
      		printf("%d", e + 1);
    	}
    	printf("\n");
  }
	return 0;
}
