#include <stdio.h>
#include <stdbool.h> // Included for the use of bool data type
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void insert(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow! Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot delete.\n");
        return;
    }
    printf("Deleted %d from the queue.\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    printf("\nEnter 1 for push\n2 for display\n3 for pop\nAny other number to exit\n");

    while (1) {
        int choice;
        printf("Which operation do you want to perform: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting...\n");
            break;
        }
        
        switch (choice) {
            case 1:
                printf("Enter number that you want to push: ");
                int num;
                if (scanf("%d", &num) != 1) {
                    printf("Invalid input for push operation.\n");
                    break;
                }
                insert(num);
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            default:
                printf("Exited successfully\n");
                printf("===============================================\n");
                return 0;
        }
    }
    return 0;
}