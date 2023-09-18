#include <string.h>
#include <stdio.h>
void main()
{
    char str1[50], str2[50], str3[50], strtemp[50];
    // strlen,strcpy,strcat,strcmp,strrev
    printf(" \n enter string 1  ");
    gets(str1);
    printf(" \n enter string 2  ");
    gets(str2);
    // strrev

    strrev(str1);
    puts(str1);
    strrev(str1);

    strrev(str2);
    puts(str2);
    strrev(str2);

    // strcmp
    printf(" \n string compares %d \n", strcmp(str1, str2));
    // if return is positive when str1's not maching character has greater ascii than second...
    // if return is negative when str1's not maching character has smaller ascii than second...
    // if return is zero when str1's mahing character has same ascii as second...

    // strcat
    puts(strcat(str2, str1));
    printf(" \n  ");
    // strtemp=strcat(str1,str2);
    // puts(strtemp);

    // strcpy
    strcpy(str3, str1);
    puts(str3);
    puts(str1);

    // strlen

    printf(" \n th size of s2 %d ", strlen(str2));
}