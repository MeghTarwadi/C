#include <stdio.h>  
#include <string.h>  
int main()  
{  
printf("\n ==============================================");
printf("\n             Reverse string");
printf("\n ==============================================");

    char str[100]; // declare the size 
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", str);  
      
    printf (" \n After the reverse of a string: %s ", strrev(str));  
	printf("\n ==============================================");
    return 0;
}
