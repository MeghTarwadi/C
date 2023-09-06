#include <stdio.h>
#include <string.h>
int main() 
{
	printf("\n ==============================================");
	printf("\n             Upper case");
	printf("\n ==============================================");
   char s[100];
   int i;
   printf("\n  Enter a string : ");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) 
   {
    if(s[i] >= 'a' && s[i] <= 'z') 
	{
        s[i] = s[i] -32;
    }
   }
   printf("String in Upper Case = %s", s);
   return 0;
}
