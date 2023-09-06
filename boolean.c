// #include <stdio.h>
// void main()
// {
    
//     char c;
//     label:
//     printf(" \n Enter value of a   ");
//     scanf("%c",&c);
//     printf(" a=%d",c);
    
//     goto label;
// }

#include <stdio.h>
void main()
{
    
    int c;
    label:
    printf(" \n Enter value of a   ");
    scanf("%d",&c);
    printf(" a=%c",c);
    
    goto label;
}