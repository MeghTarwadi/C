#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < (n - i - 1); j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() 
{
    int n;
    printf("===============================================\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("===============================================\n");
    printf("===============================================\n");
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("===============================================\n");
    printf("===============================================\n");
    printf("Inserted array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    printf("===============================================\n");
    printf("===============================================\n");
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("===============================================\n");
    return 0;
}