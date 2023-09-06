#include <stdio.h>


// with arg with return
int sum(char a, char b)
{
    a=(int)a;
    b=(int)b;
    return a+b;
}


// with arg without return
void noreturn(int a, int b)
{
    char c;
    label:
    printf("what do you want to do +*-/  \n");

    scanf("%c",&c);
    switch (c)
    {
    case '+':
        printf("%d %c %d = %d",a,c,b,a+b);
        break;
    case '-':
        printf("%d %c %d = %d",a,c,b,a-b);
        break;
    case '*':
        printf("%d %c %d = %d",a,c,b,a*b);
        break;
    case '/':
        printf("%d %c %d = %d",a,c,b,a/b);
        break;
    default:printf("please enter valid operator\n");
    goto label;
        break;
    }
}

// without arg with return
float noarg()
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
    //printf(" \n %.9f",l);
    return l;
}


// without arg without return
void wargwre()
{
    int i;
    for( i=0;i<100;i++ )
    {
        printf("*");
    }
}


void main()
{
    int k;
    char p,q,c;
    int m,n;
    float l;
    valid:
    printf("\n for arg&ret 1 \n for arg&wret 2\n for warg&ret 3 \n for warg&wret 4 ");
    scanf("%d",&k);
    switch (k)
    {
    case 1: printf("enter 1ST charcters");
            scanf("%c" ,&p);
            printf("enter 2ND charcters");
            scanf("%c",&q);
            c=sum(p,q);
                printf("%c",c);
                //printf("%d",c);
        break;
   

    case 2: printf("enter 2 numbers");
            scanf("%d %d",&m,&n);
         //   noreturn( int m, int n );
        break;
    

    case 3: printf("value of exponantiol \n");
            l=noarg();
            printf("%f",l);
        break;


    case 4:  wargwre();
        break;


    default:printf("please enter valid input");
            goto valid;
        break;
    }
}