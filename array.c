#include <stdio.h>
void main()
{
    int i , j ,student[55];
   // student[0]=15;
   // student[1]=14;
   // student[2]=13;
   // student[3]=12;
   // student[4]=11;
   // student[5]=10;
   // for ( i = 0 ; i<5 ; i++);
   // {
   //     printf("enetr elment %d  ", i);
   //     printf("=>");
   //     scanf( "%d", &student[i] );
   // }
    i=0;
    do
    {
        i++;
        printf("enetr elment %d  ", i);
        printf("=>");
        scanf( "%d", &student[i] );
    }while(i<5);

    for( i = 1 ; i<=5 ; i++)
    {
        printf("\n elment %d  ",student[i]);
    }

}