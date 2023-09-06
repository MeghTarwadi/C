#include <stdio.h>
void main()
{
    //loops

    int i,j,k,n,pattern,g,m,a,b;
    float f;
    char c;
    printf("\t");
    printf("\n *****************Patterns***************** \n");
    printf("\t");
    printf("How many you raws you want in demo");
    printf("\n");
    scanf("%d",&g);


    printf("\n=>1 for PYRAMID \n");
    printf("\t");
    for (i=0;i<g;i++)
    {
        //space
        for (j=g;j>i;j--)
        {
            printf(" ");
        }
        for (j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
        printf("\t");
    }
    
    printf("\n=>2 for Stairs \n");
    printf("\t");
    for (i=0;i<g;i++)
    {
        //space
        for (j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
        printf("\t");
    }

    printf("\n=>3 for Mirrored Stairs \n");
    printf("\t");
    for (i=0;i<g;i++)
        {
            for (j=g;j>i;j--)
            {
                printf(" ");
            }
            for (j=0;j<i+1;j++)
            {
                printf("*");
            }
        printf("\n");
        printf("\t");
        }

    printf("\n=>4 for Diamond \n");
    printf("\t");
            k=g*.5;
            k=k+1;
                for(i=0;i<k;i++)
                {
                    for(j=k;j>i;j--)
                    {
                        printf(" ");
                    }
                    printf("*");
                    //0.1.3.5.7.9
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }
                    printf("\n");
                    printf("\t");
                }




                for(i=k-2;i>0;i--)
                {
                    for(j=i;j<k;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    //i=4=>
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }

                    printf("\n");
                    printf("\t");
                }
                for(i=0;i<k;i++)
                {
                    printf(" ");
                }
                
                printf("*");

    printf("\n Which pattern you want \n");
    scanf("%d",&pattern);
    printf("\n=>How many times you want to execute the loop\ns");
    scanf("%d",&n);


    if(pattern==1)
    {
        printf("\t");
        for (i=0;i<n;i++)
        {
            
            //space
            for (j=n;j>i;j--)
            {
                printf(" ");
            }
            for (j=0;j<2*i+1;j++)
            {
                printf("*");
            }
            printf("\n");
            printf("\t");        
        }
    }

    else if(pattern==2)
    {
        printf("\t");
        for (i=0;i<n;i++)
        {
            for (j=0;j<i+1;j++)
            {
                printf("*");
            }
        printf("\n");
        printf("\t");
        }
    }

    else if(pattern==3)
    {
        printf("\t");
        for (i=0;i<n;i++)
        {
            for (j=n;j>i;j--)
            {
                printf(" ");
            }
            for (j=0;j<i+1;j++)
            {
                printf("*");
            }
        printf("\n");
        printf("\t");
        }
    }

    else //if(i==4)
    {
        k=n*.5;
        f=n%2;
        if (f==0)
        {
            n=n+1;
            printf("\n\tSorry,it is not possible to execute pattern for %d times \n\tWould you like to continue for %d times instead of %d\n\tEnter Y to continue or enter E to exit   ",n-1,n,n-1);
            scanf("%c",&c);
            scanf("%c",&c);

            if(c=='Y')
            {   printf("\t");
                k=k+1;
                for(i=0;i<k;i++)
                {
                    for(j=k;j>i;j--)
                    {
                        printf(" ");
                    }
                    printf("*");
                    //0.1.3.5.7.9
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }
                    printf("\n");
                    printf("\t");
                }




                for(i=k-2;i>0;i--)
                {
                    for(j=i;j<k;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    //i=4=>
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }

                    printf("\n");
                    printf("\t");
                }
                for(i=0;i<k;i++)
                {
                    printf(" ");
                }
                printf("*");



            }
            else if(c=='E')
            {
                printf("\t=>CODE WILL NOT EXECUTES");
            }
            else
            {
                printf("Unmatched input");
            }
        }
        else
        {
            printf("\t");
            k=n*.5;
            k=k+1;
                for(i=0;i<k;i++)
                {
                    for(j=k;j>i;j--)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }
                    printf("\n");
                    printf("\t");
                }




                for(i=k-2;i>0;i--)
                {
                    for(j=i;j<k;j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    //i=4=>
                    for(j=0;j<2*i-1;j++)
                    {
                        printf(" ");
                    }
                    if(i==0)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("*");
                    }

                    printf("\n");
                    printf("\t");
                }
                for(i=0;i<k;i++)
                {
                    printf(" ");
                }
                printf("*");
        }

    }
}
