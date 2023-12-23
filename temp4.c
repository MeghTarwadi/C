#include <stdio.h>

int queue[100];
int front = -1, rear = -1;

void insert(int value) 
{
    if ((front == 0 && rear == 99) || (front == rear + 1)) 
    {
        printf("Queue Overflow! Cannot insert.\n");
        printf("===============================================\n\n");
        return;
    }
    if (front == -1) 
    {
        front = 0;
        rear = 0;
    }
    else 
    {
        rear = (rear + 1) % 100;
    }
    queue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
    printf("===============================================\n\n");
}

void delete() 
{
    if (front == -1) 
    {
        printf("Queue Underflow! Cannot delete.\n");
        printf("===============================================\n\n");
        return;
    }
    int deletedValue = queue[front];
    if (front == rear) 
    {
        front = -1;
        rear = -1;
    } 
    else 
    {
        front = (front + 1) % 100;
    }
    printf("Deleted %d from the queue.\n", deletedValue);
    printf("===============================================\n\n");
}

void display() 
{
    if (front == -1) 
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are: ");
    int i = front;
    do 
    {
        printf("%d ", queue[i]);
        i = (i + 1) % 100;
    } while (i != (rear + 1) % 100);

    printf("\n");
    printf("===============================================\n\n");

}

int main() 
{
    int choice=0, value;
    printf("===============================================");
    printf( "\nEnter 1. for push \n      2. for display \n      3. for pop\n      any number to exit\n");
    printf("===============================================\n\n");
    while (choice<4)
    {   
        printf("===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                display();
                break;
            case 3:
                delete();
                break;
            default:
                break;
        }
    }
    printf("Exited successfully.\n");
    printf("===============================================\n");
    return 0;
}
