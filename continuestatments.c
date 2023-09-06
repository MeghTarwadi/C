#include <stdio.h>
void main()
{
    int a,b;
    printf("Value of a for loops   " );
    scanf("%d", &a);

    while (a<10)
    {
        printf("\n %d",a);
        a=a+1;
        if(a < 5)
        {
            printf("skip");
            continue;
        }
        
        printf(" after continue = %d",a);
    }
    printf("just check");
}
