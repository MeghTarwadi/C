#include <stdio.h>
void func1(int *arr, int k);

int main()
{

    int n;

    printf(" \n how many numbers you want to enter ");
    scanf(" %d ", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf(" \n enter array [%d] ", i);
        scanf(" %d ", &array[i]);
    }
    // reverse array

    func1(array, n);

    for (int i = 0; i < n; i++)
    {
        // printf(" \n array [%d] = %d ", i, arr[i]);
        printf(" \n array [%d] = %d ", i, *(array + i));
    }

    return 0;
}

void func1(int *arr, int k)
{
    int temp1, i;
    for (i = k; i > ((k) / 2); i--)
    {
        temp1 = *(arr + i);
        *(arr + i) = *(arr + (k - i));
        *(arr + (k - i)) = temp1;
    }

    // for (i = 0; i < k; i++)
    // {
    //     // printf(" \n array [%d] = %d ", i, arr[i]);
    //     printf(" \n array [%d] = %d ", i, *(arr + i));
    // }
}
