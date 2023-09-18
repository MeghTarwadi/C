#include <stdio.h> 

struct megh
{
    int megh;
    float meg;
    char me;
};
struct megh a1,a2,a3; //global variables
//it can be called in functions and main ...

int fu()
{
    a1.megh=52;
    a2.megh=51;
    a3.megh=50;

    a1.meg=51.51;
    a2.meg=52.52;
    a3.meg=53.53;

    a1.me='m';
    a2.me='e';
    a3.me='g';

    // printf( " \n %d " , a1.megh );
    // printf( " \n %d " , a2.megh );
    // printf( " \n %d " , a3.megh );

    // printf( " \n %f " , a1.meg );
    // printf( " \n %f " , a2.meg );
    // printf( " \n %f " , a3.meg );

    // printf( " \n %c " , a1.me );
    // printf( " \n %c " , a2.me );
    // printf( " \n %c " , a3.me );
}

void main() 
{ 
    fu();

    // a1.megh=52;
    // a2.megh=51;
    // a3.megh=50;

    // a1.meg=51.51;
    // a2.meg=52.52;
    // a3.meg=53.53;

    // a1.me='m';
    // a2.me='e';
    // a3.me='g';

    printf( " \n %d " , a1.megh );
    printf( " \n %d " , a2.megh );
    printf( " \n %d " , a3.megh );

    printf( " \n %f " , a1.meg );
    printf( " \n %f " , a2.meg );
    printf( " \n %f " , a3.meg );

    printf( " \n %c " , a1.me );
    printf( " \n %c " , a2.me );
    printf( " \n %c " , a3.me );

} 