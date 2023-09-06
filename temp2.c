#include <stdio.h>
float main()
{
    int i,j;
    float g,l,k,s[50];

    for (i=1;i<=10;i++)
    {
        k=1.0;
        for(j=1;j<=i;j++)
        {
            k=j*k;
            if(j<i)
            {
                continue;
            }
            s[i]=1/k;
            //printf(" \n %.9f",s[i]);
        }
        l=l+s[i];
    }
     printf(" \n %.9f",l);
     return 0;
}