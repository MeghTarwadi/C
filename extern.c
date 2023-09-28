#include <stdio.h>
#include "externmain.c"
int ext=e+100;
int func2()
{
    ext = ext + 11;
    printf("\nin func2 %d",ext);
}