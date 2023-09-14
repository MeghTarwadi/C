#include <stdio.h>

void swapAddress(int **k, int **l)
{
    int *t;
    t = *k;
    *k = *l;
    *l = t;
}

int main()
{
    int a, b, *ptr1, *ptr2;

    printf("\nEnter the value of an integer a: ");
    scanf("%d", &a);
    printf("Enter the value of an integer b: ");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("\nBefore swapping addresses:");
    printf("\nValue of a: %d", *ptr1);
    printf("\nAddress of a: %p",  *ptr1);
    printf("\nValue of b: %d", *ptr2);
    printf("\nAddress of b: %p", *ptr2);

    swapAddress(&ptr1, &ptr2);

    printf("\n\nAfter swapping addresses:");
    printf("\nValue of a: %d", *ptr1);
    printf("\nAddress of a: %p", (void *)ptr1);
    printf("\nValue of b: %d", *ptr2);
    printf("\nAddress of b: %p\n", (void *)ptr2);

    return 0;
}
