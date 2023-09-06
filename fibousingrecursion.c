// fibonaki using recusion

#include <stdio.h>
void fibo(int a, int b, int c);
void main()
{
    int f;
    printf("Enter numbers of rounds  ");
    scanf("%d", &f);
    printf(" 0 , 1 ");
    fibo(f, 0, 1);
}

void fibo(int a, int b, int c)
{
    int third, first, second;
    first = b;
    second = c;

    if (a > 0)
    {
        third = first + second;
        printf(", %d ", third);
        first = second;
        second = third;
        fibo(a - 2, first, second);
    }
}
