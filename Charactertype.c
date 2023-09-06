#include <stdio.h>
void main()
{
	char c;
	printf("\n========================================");
	printf("\n          Character type");
	printf("\n========================================\n");
	printf("\n Enter speed of object= ");
	scanf("%c",&c);
	
	if (c>='A' && c<='Z')
	{
		printf("\n Character is *Capital alphabets* \n");
	}
	else if (c>='a' && c<='z')
	{
		printf("\n Character is *Small alphabets* \n");
	}
	else if (c>=-9999 && c<=9999)
	{
		printf("\n Character is *digit* \n");
	}
	else
	{
		printf("\n Character is *Special character* \n");
	}
	printf("\n========================================");
}
