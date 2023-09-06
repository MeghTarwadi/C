#include <stdio.h>

void main ()
{
    int i=0,a;

    restart:
    printf("\n do you want to continue if yes than print 1 else enter  0");

    if (i==1)
    {
        invalid:
        printf("\n Please enter valid character");
    }
    
    scanf("%d",&a);

    if ( a == 1)
    {
        goto restart;
    }

    else if ( a == 0 )
    {
        goto exit;
    }
    else
    {
        goto invalid;
    }
    exit:
    printf(" exit");

}
