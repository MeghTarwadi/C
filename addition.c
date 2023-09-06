#include <stdio.h>
int main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);
    // printf("a=%d,b=%d \n",a,b);
    if (a == b)
    {
        printf("%d=%d \n ", a, b);
    }
    else if (a > b)
    {
        printf("%d>%d \n", a, b);
    }
    else
    {
        printf("%d<%d \n", a, b);
    }
    return 0;
}