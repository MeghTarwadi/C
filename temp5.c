#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int value) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtFront(struct Node** head, int value) 
{
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int value) 
{
    struct Node* newNode = createNode(value);
    if (*head == NULL) 
    {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertInOrder(struct Node** head, int value) 
{
    struct Node* newNode = createNode(value);
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL && current->data < value) 
    {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) 
    {
        newNode->next = *head;
        *head = newNode;
    }
    else 
    {
        prev->next = newNode;
        newNode->next = current;
    }
}

void deleteFirstNode(struct Node** head) 
{
    if (*head == NULL) 
    {
        printf("Linked list is empty.\n");
        printf("===============================================\n\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteBeforePosition(struct Node** head, int position) 
{
    if (*head == NULL || (*head)->next == NULL || position <= 1) 
    {
        printf("Cannot delete before specified position.\n");
        printf("===============================================\n\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;
    int count = 1;

    while (current != NULL && count < position - 1) 
    {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL) 
    {
        printf("Cannot delete before specified position.\n");
        printf("===============================================\n\n");
        return;
    }

    struct Node* temp = current->next;
    current->next = temp->next;
    free(temp);
}

void deleteAfterPosition(struct Node** head, int position) 
{
    if (*head == NULL || position <= 0) 
    {
        printf("Cannot delete after specified position.\n");
        printf("===============================================\n\n");
        return;
    }

    struct Node* current = *head;
    int count = 1;

    while (current != NULL && count < position) 
    {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL) 
    {
        printf("Cannot delete after specified position.\n");
        printf("===============================================\n\n");
        return;
    }

    struct Node* temp = current->next;
    current->next = temp->next;
    free(temp);
}

void display(struct Node* head) 
{
    struct Node* temp = head;
    if (temp == NULL) 
    {
        printf("Linked list is empty.\n");
        printf("===============================================\n\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    printf("===============================================\n\n");
}

int main() 
{
    struct Node* head = NULL;
    int choice, value, position;
    printf("===============================================\n");
    printf( "Enter 1. for push at front\n      2. for push at end\n      3. ascending order\n      4. for pop at first\n      ");
    printf( "5. for pop before specific position\n      6. for pop after specific position\n      7. display\n      any number to exit");
    printf("\n===============================================\n\n");
    do
    {
        printf("===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to insert at the front: ");
                scanf("%d", &value);
                insertAtFront(&head, value);
                printf("===============================================\n\n");
                break;
            case 2:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                printf("===============================================\n\n");

                break;
            case 3:
                printf("Enter value to insert in ascending order: ");
                scanf("%d", &value);
                insertInOrder(&head, value);
                printf("===============================================\n\n");
                break;
            case 4:
                deleteFirstNode(&head);
                printf("===============================================\n\n");
                break;
            case 5:
                printf("Enter position before which node should be deleted: ");
                scanf("%d", &position);
                deleteBeforePosition(&head, position);
                printf("===============================================\n\n");
                break;
            case 6:
                printf("Enter position after which node should be deleted: ");
                scanf("%d", &position);
                deleteAfterPosition(&head, position);
                break;
            case 7:
                display(head);
                break;
        }
    } while (choice<8);
    printf("Exited successfully.\n");
    printf("===============================================\n");
    return 0;
}