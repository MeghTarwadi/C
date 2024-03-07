#include <stdio.h>

void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int max = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) 
        {
            if (arr[j] < max) 
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = (i + 1);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    quickSort(arr, 0, n - 1);
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
