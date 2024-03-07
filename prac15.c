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
int binarySearch(int arr[], int left, int right, int target) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) 
        {
            return mid;
        }
        if (arr[mid] < target) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    return -1;
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
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("===============================================\n");
    printf("===============================================\n");
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1) 
    {
        printf("Element found at index %d\n", result);
    } 
    else 
    {
        printf("Element not found in the array\n");
    }
    printf("===============================================\n");
    return 0;
}