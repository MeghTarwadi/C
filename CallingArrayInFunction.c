// #include <stdio.h>
// void func(int *array);
// void main()
// {

//     int a[2][5] = {{1, 2, 3, 4, 5}, {11, 12, 13, 14, 15}};
//     func(a);
// }
// void func(int *array)
// {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("\n value of array %d", *(array + i));
//     }
// }

#include <stdio.h>
int func(int *array);
void main()
{

    int a[2][5] = {{1, 2, 3, 4, 5} , {11, 12, 13, 14, 15}};

    func(a);
}
int func(int *array)
{
    int i,j,k;
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            k=j+(i*5);
            printf("value of array %d \n", *(array + k));
        }
    }
}