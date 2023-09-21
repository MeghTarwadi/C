#include <stdio.h>

void func1(int *arr, int k);

int main()
{
    int n;

    printf("\nHow many numbers you want to enter: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter array [%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Reverse the array
    func1(array, n);

    return 0;
}

void func1(int *arr, int k)
{
    int temp1, i;
    for (i = 0; i < k / 2; i++)
    {
        temp1 = *(arr + i);
        *(arr + i) = *(arr + k - i - 1);
        *(arr + k - i - 1) = temp1;
    }

    for (i = 0; i < k; i++)
    {
        printf("\narray [%d] = %d", i, *(arr + i));
    }
}
