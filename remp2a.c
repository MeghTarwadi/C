#include <stdio.h>
#include <string.h>
char stack[100];
int stop = 0, ptop = 0;
char postfix[100];
int priority(char temp)
{
    int p = (int)temp;
    if (p == 40 || p == 41) 
    {
        return 6;
    } 
    else if (p == 94) 
    {
        return 4;
    } 
    else if (p == 47 || p == 42 || p == 37) 
    {
        return 3;
    } 
    else if (p == 43 || p == 45) 
    {
        return 2;
    } 
    else if ((p >= 48 && p <= 57) || (p >= 65 && p <= 90) || (p >= 97 && p <= 122)) 
    {
        return 1;
    } 
    else 
    {
        return 9;
    }
}

void equal_priority(char A) 
{
    postfix[ptop] = stack[stop];
    ptop++;
    stop--;
    stack[stop] = A;
    stop++;
}

void lower_than_priority(char A) 
{ 
    while (stop > 0 && priority(stack[stop - 1]) >= priority(A)) 
    {
        postfix[ptop] = stack[stop - 1];
        ptop++;
        stop--;
    }
    stack[stop] = A;
    stop++;
}

void higher_than_priority(char A) 
{
    stack[stop] = A;
    stop++;
}

char* Postfix(char a[])
{
    int previous = 0;
    for (int top = 0; top < strlen(a); top++) 
    {
        if (priority(a[top]) == 9) 
        {
            return "Please enter VALID input";
        } 
        else if (priority(a[top]) == 1) 
        {
            postfix[ptop] = a[top];
            ptop++;
        } 
        else if (priority(a[top]) == 6) 
        {
            if (a[top] == 40)
            {
                stack[stop] = a[top];
                stop++;
            }
            else
            {
                while (stack[stop - 1] != 41)
                {
                    postfix[ptop] = stack[stop - 1];
                    ptop++;
                    stop--;
                }
                stop--; 
            }
        }
        else 
        {
            if (previous <= priority(a[top]))
            {
                higher_than_priority(a[top]);
                previous = priority(a[top]);
            } 
            else 
            {
                lower_than_priority(a[top]);
            }
        }
    }

    while (stop > 0) 
    {
        postfix[ptop] = stack[stop - 1];
        ptop++;
        stop--;
    }

    return postfix;
}

int main() 
{
    char infix[100];
    printf("===============================================\n\n");
    printf("Enter your Infix expression : ");
    gets(infix);
    printf("\n\n===============================================\n\n");
    printf("Your Postfix expression : %s", Postfix(infix));
    printf("\n\n===============================================\n");
    return 0;
}