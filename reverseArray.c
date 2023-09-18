#include <stdio.h>
void func1(int *arr, int k);

void main()
{

    int n, array[n];

    printf(" \n how many numbers you want to enter ");
    scanf(" %d ", &n);
    for (int i = 0; i <= n; i++)
    {
        printf(" \n enter array [%d] ", i);
        scanf(" %d ", &array[i]);
    }

    // reverse array

    func1(array, n);
}

void func1(int *arr, int k)
{
    int temp1,i;
    for (i = k; i >= (k - 1) / 2; i--)
    {
        temp1 = *(arr + i);
        *(arr + i) = *(arr + (k - i));
        *(arr + (k - i)) = temp1;
    }
    for (i = 0; i <= k; i++)
    {
        printf(" \n array [%d] = %d ", k, arr[i]);
        printf(" \n array [%d] = %d ", k, *(arr + i));
    }
}
