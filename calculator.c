#include <stdio.h>
void main()
{
    int  a,b;
    char c;

    printf("\n Enter operato (+,-,*,/)");
   // scanf("%c",&c);
    printf("\n Enter value of a");
    //scanf("%d",&a);
    printf("\n Enter value of b");
    scanf(" %d %d %c ",&a ,&b, &c);
    printf("%d %c %d = ",a,c,b);

    if(c==43)
    {
        printf("%d",a+b);
    }
    else if(c==45)
    {
        printf("%d",a-b);
    }
    else if(c==42)
    {
        printf("%d",a*b);
    }
    else if(c==47)
    {
        printf("%d",a/b);
    }
    else
    {
        printf("error");
        printf("\nEnter valid operands");
    }
}