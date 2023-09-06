#include <stdio.h>

int main() 

	{
 		int a[10],i,min,max;
 		
 		printf("\n ==========================================");
		printf("  \n Mximum and minimum amoung 10 numbers");
		printf("\n ==========================================");
		
 		for(i=0;i<10;i++)
 		{
  			printf("\n Enter Interger Value of %d number1: ",i+1);
  			scanf("%d",&a[i]);
  			if(i==0)
  			{
   				min=max=a[i];
  			}
  			else
  			{
   				if(min>a[i])
   				{
    				min=a[i];
   				}
   				if(max<a[i])
   				{
    				max=a[i];
   				}
  			}
 		}
 		printf("\n Minimum number is: %d",min);
 		printf("\n Maximum number is: %d",max);
 		printf("\n ==========================================");
 		return 0;
	}             
