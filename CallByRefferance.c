#include <stdio.h>
/*
    here we can use both void or int ...
*/
void swapValues(int *k, int *l)
{
    int t;
    t = (int)*k;
    *k = (int)*l;
    *l = (int)t;
}

void swapAddress(int **k, int **l)
{
    int t;
    t = (int)*k;
    *k = (int)*l;
    *l = (int)t;
}

void main()
{
    // int a,*ptr=a;
    int a, b, t, *ptr1, *ptr2;
    printf(" \n Enter value of an intiger a");
    scanf(" %d ", &a);
    printf(" \n Enter value of an intiger b");
    scanf(" %d ", &b);
    *ptr1 = a;
    ptr2 = &b;
    printf(" \n before the change in value a %d ", *ptr1);
    printf(" \n before the change in adress a %d ", ptr1);
    printf(" \n before the change in value b %d ", *ptr2);
    printf(" \n before the change in adress b %d ", ptr2);

    swapValues(ptr1, ptr2);

    printf(" \n swap values ");
    printf(" \n after the change in value a %d ", *ptr1);
    printf(" \n after the change in adress a %d ", ptr1);
    printf(" \n after the change in value b %d ", *ptr2);
    printf(" \n after the change in adress b %d ", ptr2);

    swapValues(ptr1, ptr2);
    swapAddress(&ptr1, &ptr2);
    // t = ptr1;
    // ptr1 = ptr2;
    // ptr2 = t;
    printf(" \n swap address");
    printf(" \n after the change in value a %d ", *ptr1);
    printf(" \n after the change in adress a %d ", ptr1);
    printf(" \n after the change in value b %d ", *ptr2);
    printf(" \n after the change in adress b %d ", ptr2);
}