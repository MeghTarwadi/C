#include <stdio.h>

int main(void) 
{
	printf("\n ===============================================");
	printf("\n Number is even or odd from list of 10 numbers");
	printf("\n ===============================================");
	int a[10], i;
	  for (i = 0; i < 9; i++) 
  	{
    printf("\n Enter Value in Array at Position %d :", i + 1);
    scanf("%d", & a[i]);
  	}
  	for (i = 0; i < 9; i++) 
  	{
    if (a[i] % 2 == 0) 
		{
      		printf("\n %d is an EVEN number.", a[i]);
    	}
	else 
		{
    	  printf("\n %d is an ODD number.", a[i]);
    	}
  	}
  return 0;
}
