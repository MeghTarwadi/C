#include <stdio.h>
#include <stdlib.h>

void scan(int *p, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf(" \n Enter the value of %d element ", i);
        scanf("%d", &p[i]);
    }
}

void print(int *p, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf(" \n The value of %d element is %d", i, p[i]);
    }
}

int main()
{
    int *ptr;
    int k, n, a;
    printf(" \n How many numbers you want  ");
    scanf("%d", &n);

    // // malloc
    // printf( "\nUsing malloc" );
    // ptr = malloc(n * sizeof(int));
    // if (ptr == NULL)
    // {
    //     printf("Memory allocation failed. Exiting...\n");
    //     return 1;
    // }
    // print(ptr, n);
    // scan(ptr, n);
    // print(ptr, n);
    // free(ptr);
    // print(ptr, n);

    // calloc

    printf("\nUsing calloc");
    ptr = calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    print(ptr, n);
    scan(ptr, n);
    print(ptr, n);
    printf( "\nAfter free" );
    free(ptr);
    print(ptr, n);
    printf("\nEnter the size that you want to have");
    scanf("%d", &a);

    ptr = realloc(ptr, a * sizeof(int));
    printf("\nUsing realloc");
    ptr = calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    print(ptr, a);
    scan(ptr, a);
    print(ptr, a);
    printf( "\nAfter free" );
    free(ptr);
    print(ptr, a);

    return 0;
}