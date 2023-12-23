#include <stdio.h>

int queue[100];
int front = -1, rear = -1;

void insert(int value) 
{
    if (rear == 99) 
    {
        printf("Queue Overflow! Cannot insert.\n");
        printf("===============================================\n\n");
        return;
    }
    if (front == -1) 
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
    printf("===============================================\n\n");

}

void delete()
{
    if (front == -1 || front > rear) 
    {
        printf("Queue Underflow! Cannot delete.\n");
        printf("===============================================\n\n");
        return;
    }
    printf("Deleted %d from the queue.\n", queue[front]);
    printf("===============================================\n\n");
    front++;
}

void display() 
{
    if (front == -1 || front > rear) 
    {
        printf("Queue is empty.\n");
        printf("===============================================\n\n");

        return;
    }
    printf("Elements in the queue are: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
    printf("===============================================\n\n");
    
}

int main() 
{
    int a=0;
    printf("===============================================");
    printf( "\nEnter 1. for push \n      2. for display \n      3. for pop\n      any number to exit\n");

    printf("===============================================\n\n");
    while(a<4)
    {
        printf("===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d",&a);
        switch (a) 
        {
            case 1: printf( "Enter number that you want to push : ");
                    int k;
                    scanf("%d",&k);
                    insert(k);
                    break;
            case 2: display();
                    break;
            case 3: delete();
                    break;
            default:
                    break;
        }
    }
    printf( "Exited successfully\n");
    printf("===============================================\n");

    return 0;
}
