#include <stdio.h>
void main()
{
    int a = 100, *ptr1 = &a;
    int arr[] = {11, 12, 13, 14, 15, 16}, *ptr = arr;

    // arr[0]= 40;
    // arr[1]= 41;
    // arr[2]= 42;
    // arr[3]= 43;
    // arr[4]= 44;
    // arr[5]= 45;

    printf("\n address %d", &a);
    printf("\n address %d", ptr1);
    printf("\n address %d", &*ptr1);
    printf("\n value %d", a);
    printf("\n value %d", *ptr1);
    // printf("\n value %p" , *ptr ); // p is pointer specifier but should not be used since it gives value in hexadecimal
    // printf("\n address %x" , ptr ); //hexadecimal specifier x
    printf("\n address of ptr %d", &ptr1);

    printf("\n*******************************************************************************");

    printf(" \nvalue of array %d ", arr[0]);
    printf(" \nvalue of array %d ", arr[1]);
    printf(" \nvalue of array %d ", arr[2]);
    printf(" \nvalue of array %d ", arr[3]);
    printf(" \nvalue of array %d ", arr[4]);
    printf(" \nvalue of array %d ", arr[5]);

    printf(" \nvalue of array %d ", *(ptr + 0));
    printf(" \nvalue of array %d ", *(ptr + 1));
    printf(" \nvalue of array %d ", *(ptr + 2));
    printf(" \nvalue of array %d ", *(ptr + 3));
    printf(" \nvalue of array %d ", *(ptr + 4));
    printf(" \nvalue of array %d ", *(ptr + 5));

    printf(" \naddress of array %d ", (ptr + 0));
    printf(" \naddress of array %d ", (ptr + 1));
    printf(" \naddress of array %d ", (ptr + 2));
    printf(" \naddress of array %d ", (ptr + 3));
    printf(" \naddress of array %d ", (ptr + 4));
    printf(" \naddress of array %d ", (ptr + 5));

    printf(" \naddress of array %d ", &arr[0]);
    printf(" \naddress of array %d ", &arr[1]);
    printf(" \naddress of array %d ", &arr[2]);
    printf(" \naddress of array %d ", &arr[3]);
    printf(" \naddress of array %d ", &arr[4]);
    printf(" \naddress of array %d ", &arr[5]);

    // printf( " \n before change %d",ptr );
    // ptr++; // this will allow to change address
    // arr++; // this this wont allow you to change
    // printf( " \n after change %d",ptr );

    for (int i = 0; i < 6; ptr++)
    {
        printf("\naddress of pointer %d", ptr);
        i++;
    }
    // printf( " \n after loop of pointer %d",ptr );

    ptr = (ptr - 6);
    for (int i = 0; i < 6; i++)
    {
        printf("\nvalue of pointer %d", *ptr);
        ptr++;
    }
    // printf( "\nafter loop of pointer %d",ptr );
}
