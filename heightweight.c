#include<stdio.h>
int main()
{	
	printf("\n ===============================================");
	printf("\n      Person's height and weight");
	printf("\n ==============================================");
  	int person, height, weight, count = 0;
  	for (person = 0; person < 5; person++) 
	{
    	printf("\n Enter Detail of Person - %d", person + 1);
    	printf("\n Enter Height : ");
    	scanf("%d", & height);
    	printf("\n Enter Weight : ");
    	scanf("%d", & weight);
    		if (height > 170) 
			{
      			if (weight < 50) 
				{
        			count++;
      			}
    		}
  	}
   	printf("\n Total Person having Height > 170 and Weight < 50 : %d", count);
  	return 0;
  	printf("\n ==============================================");
}
