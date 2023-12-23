#include <stdio.h>
extern int ext;
extern int 
func2();
//try to use int ext; eithout extern keyword it will throw error though i implemened 
//file extern is due to i included it at lsast hance it says that you didnt defined 
//antthing here and throws error there are teo options for it 1. define at the start
// 2. use extern key word
int global=27;
int func1()
{
    global=global-200;
    return global;
}
int func()
{
    static int staticc;
    staticc++;
    printf("\nthis is for %d times",staticc);
}
int main()
{
    int localORautomatic=69;
    printf( "\nThis is local variable %d",localORautomatic );
    func();
    func();
    func();
    func();
    func();
    printf( "\nglobal variable without change %d",global );
    global=225;
    printf( "\nglobal variable with change %d",global );
    printf( "\nglobal variable in function after change in main() %d",func1() );
    printf( "\nglobal variable after function %d",global );
    printf( "\nThe extern variable is %d",ext );
    func2();
}
#include "extern.c"