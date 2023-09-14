#include <stdio.h>

void StrWithoutNum(char a[])
{
    int i;
    for (i = 0; i < 999; i++)
    {
        if (a[i] == '\0')
        {
            goto quit;
        }
        else
        {
            if (a[i] >= '0' && a[i] <= '9' )
            {
                printf("*");
            }
            else
            {
                printf( "%c", a[i] );
            }
        }
    }
quit:
return;
}



void main()
{
    // char me[] = {'m', 'e', 'g', 'h', ' ', 'o', 't', 'a', 'k', 'u', '\0'};
    // char WithoutNull[] = {'m', 'e', 'g', 'h', ' ', 'o', 't', 'a', 'k', 'u'};
    // char WithoutNull[50] = {'m', 'e', 'g', 'h', ' ', 'o', 't', 'a', 'k', 'u'};
    // char me[5] = {'m', 'e', 'g', 'h', ' ', 'o', 't', 'a', 'k', 'u'};
    // char me[] = "megh otaku";
    // char me[] = {"megh otaku"};
    // char me[5] = {"megh otaku"};
    // puts(me);
    // puts(WithoutNull);

    // char meghg[50], meghs[50];

    // // using gets and puts
    // printf(" \n using gets ");
    // gets(meghg);
    // printf("\n print using printf meghg %s", meghg);
    // printf("\n print using puts meghg ");
    // puts(meghg);
    // // using printf and scanf
    // printf(" \n using scanf ");
    // scanf(" %s ", &meghs); // for differance use spacebars
    // printf("\n print using printf meghs %s", meghs);
    // printf("\n print using puts meghs ");
    // puts(meghs);

    // by function for condition check or... and it is same as passing array in function (concept of memory...)
    char me[] = {"megh otaku 1234 cote ep 06"};
    StrWithoutNum(me);


}