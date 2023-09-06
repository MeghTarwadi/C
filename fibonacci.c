#include <stdio.h>
int main()

{
	printf("\n ==========================================");
	printf("  \n        Fibonacci series");
	printf("\n ==========================================");
  	int no = 15, i = 0, j = 1;
  	printf("\n %d %d", i, j);
  	while (no > 0) 
	{
    	printf(" %d", i + j);
    	j = i + j;
    	i = j - i;
    	no--;
  	}
  	
  	printf("\n ==========================================");
  	return 0;
}
