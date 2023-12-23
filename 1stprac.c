#include <stdio.h>

int stack[100];
int top = -1;

void push(int value) 
{
    if (top == 99) 
    {
        printf("Stack overflow.\n");
        printf("===============================================\n\n");

        return;
    }
    stack[top++] = value;
    printf("%d pushed into the stack.\n", value);
    printf("===============================================\n\n");
}

void pop() 
{
    if (top == -1) 
    {
        printf("Stack underflow.\n");
        printf("===============================================\n\n");
        return;
    }
    top--;
    printf("%d popped from the stack.\n", stack[top]);
    printf("===============================================\n\n");
}

void peep() 
{
    if (top == -1) 
    {
        printf("Stack is empty.\n");
        printf("===============================================\n\n");

        return;
    }
    printf("Top of the stack: %d\n", stack[top-1]);
    printf("===============================================\n\n");

}

void change(int newValue) 
{
    if (top == -1) 
    {
        printf("Stack is empty - cannot change top value.\n");
        printf("===============================================\n\n");
        return;
    }
    stack[top-1] = newValue;
    printf("Top value changed to %d.\n", newValue);
    printf("===============================================\n\n");

}

void display() 
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        printf("===============================================\n\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = -1; i < top; i++) 
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    printf("===============================================\n\n");
}

int main() 
{
    int a=0;
    int temp;
    int k;
    printf("===============================================");
    printf( "\nEnter 1. for push \n      2. for display \n      3. for pop\n      4. for peep\n      5. for change\n      any number to exit\n");
    printf("===============================================\n\n");

    for(a;a<6;k++)
    {
        printf("===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d",&a);
        switch (a) 
        {
            case 1: printf( "Enter number that you want to push : ");
                    k=0;
                    scanf("%d",&k);
                    push(k);
                    break;
            case 2: display();
                    break;
            case 3: pop();
                    break;
            case 4: peep();
                    break;
            case 5: printf( "Enter number that you want to change : ");
                    k=0;
                    scanf("%d",&k);
                    change(k);
                    break;
            default:
                    break;
        }
    }
    printf( "Exited successfully\n");
    printf("===============================================\n");
    return 0;
}
