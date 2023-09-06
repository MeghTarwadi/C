#include <stdio.h>

int main()
{
	int a;
	printf("\n========================================");
	printf("\n             Relatively day");
	printf("\n========================================\n");
	printf("\n Sunday    (1)");
	printf("\n Monday    (2)");
	printf("\n Tuesday   (3)");
	printf("\n Wednesday (4)");
	printf("\n Thursday  (5)");
	printf("\n Friday    (6)");
	printf("\n Saturday  (7)\n");
	printf("\n Enter digit of day=");
	scanf("%d",&a);
	
	if (a==1)
	{
		printf("\n Sunday    \n");
	}
	
	else if (a==2)
	{
		printf("\n Monday    \n");
	}
	
	else if (a==3)
	{
		printf("\n Tuesday    \n");
	}
	
		else if (a==4)
	{
		printf("\n Wednesday    \n");
	}
	
		else if (a==5)
	{
		printf("\n Thursday    \n");
	}
	
		else if (a==6)
	{
		printf("\n Friday    \n");
	}
	
		else if (a==7)
	{
		printf("\n Saturday    \n");
	}
	
		else
	{
		printf("\n Enter valid number!    \n");
	}
	
	

	printf("\n========================================");
	return 0;
}

