#include <stdio.h>

int functemp()
{
    return 3 + 4;
}

void func1(int *arr)
{
    static int k;
    
    for(int i=0 ; i <99 ; i++)
    {
    if (k !=25 && k < 50)
    {
        *(arr + k) = k;
    }
    else
    {
        *(arr + k)=NULL;
        printf( " \n the address of null is %d ",(arr + k) );
    }
    k++;
    }
}

void main()
{
    /*
    static int b=functemp();
    printf( " \n value of a is %d",b );
    */
    /*
    static int a;
    printf(" \n Enter value of a ");
    scanf(" %d ", &a);
    printf( " \n value of a is %d",a );
    a++;
    printf( " \n value of a after increment is %d",a );
    */

    int a[50];
    func1(a);
    printf(" \n after brakedown of condition ");
    for (int i = 0; i < 50; i++)
    {
        printf(" \n array %d =%d ", i, *(a + i));
        //printf( " \n the address of null is %d ",(a + i) );
    }
}
