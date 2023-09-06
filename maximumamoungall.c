#include <stdio.h>

void main()

{
	float a,b,c;
	printf("\n========================================");
	printf("\n             Maximum number");
	printf("\n========================================\n");
	
	printf("\n Enter value of first variable =  ");
	scanf("%f",&a);
	printf("\n Enter value of second variable = ");
	scanf("%f",&b);
	printf("\n Enter value of third variable =  ");
	scanf("%f",&c);



	//a>b,a>c
	if (a>b && a>c)
	{
		printf("\n First variable is maximum amoung all variables\n");
	}
	
	
	
	//b>a,b>c
    else if (b>a && b>c)
    {
        printf("\n Second variable is maximum amoung all variables \n");
    }
    
    
    //c>a,c>b
	else if (c>a && c>b)
    {
        printf("\n Third variable ia maximum amoung all variables\n");
    }
    
    
    
    //b<a=c
    else if (a==c && a>b)
    {
        printf("\n First and Third variable are maximum amoung all \n");
    }
    
    
    
    //c<a=b
	else if (a==b && b>c)
	{
	    printf("\n First and Second are maximum amoung all\n");
	}
	
	
	
	//a<b=c
    else if (b==c && c>a)
	{

		printf("\n Second and Third variable are maximum amoung all\n");
	}
	
    
    
    //a=b=c
	else
	{
	    printf("\n All variable are same \n");
	}
	
	
	
	
	printf("\n========================================");
	
}
