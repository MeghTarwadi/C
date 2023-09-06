#include <stdio.h>

int func(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    else
    {
        return number * func(number - 1);
    }
}

void main()
{
    int m, n;
    printf("Enter numbers of times that you want to recursion \n");
    scanf("%d", &n);
    m = func(n);
    printf("%d", m);
}
