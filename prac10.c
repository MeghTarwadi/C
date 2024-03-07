#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *createNode(int value) 
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) 
    {
        printf("Memory allocation failed\n");
        printf("===============================================\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct node **head, int value) 
{
    struct node *newNode = createNode(value);

    if (*head == NULL) 
    {
        *head = newNode;
        newNode->next = newNode;
    } 
    else 
    {
        struct node *temp = *head;
        while (temp->next != *head) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

void insertBeforePosition(struct node **head, int position, int value) 
{
    if (position <= 0) 
    {
        printf("Invalid position\n");
        printf("===============================================\n");
        return;
    }

    struct node *newNode = createNode(value);

    if (*head == NULL) 
    {
        printf("List is empty, node cannot be inserted\n");
        printf("===============================================\n");
        return;
    }

    struct node *temp = *head;
    int count = 1;

    if (position == 1) 
    {
        newNode->next = *head;
        while (temp->next != *head) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
        *head = newNode;
    } 
    else 
    {
        while (count < position - 1 && temp->next != *head) 
        {
            temp = temp->next;
            count++;
        }

        if (count != position - 1)
        {
            printf("Position is greater than the number of elements\n");
            printf("===============================================\n");
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFirstNode(struct node **head) 
{
    if (*head == NULL) 
    {
        printf("List is empty, deletion not possible\n");
        printf("===============================================\n");
        return;
    }

    struct node *temp = *head;
    struct node *last = *head;

    while (last->next != *head) 
    {
        last = last->next;
    }

    *head = temp->next;
    last->next = *head;
    free(temp);
}

void deleteAfterPosition(struct node **head, int position) 
{
    if (*head == NULL) 
    {
        printf("List is empty, deletion not possible\n");
        printf("===============================================\n");
        return;
    }

    struct node *temp = *head;
    struct node *prev = NULL;
    int count = 0;

    do 
    {
        prev = temp;
        temp = temp->next;
        count++;
    }while (temp->next != *head && count < position);

    if (count < position) 
    {
        printf("Position exceeds the number of nodes\n");
        printf("===============================================\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void display(struct node *head) 
{
    if (head == NULL)
    {
        printf("List is empty\n");
        printf("===============================================\n");
        return;
    }

    struct node *temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n===============================================\n");
}

int main() 
{
    struct node *head = NULL;
    int choice, value, position;
    printf("===============================================\n");
    printf("1. Insert at end\n");
    printf("2. Insert before position\n");
    printf("3. Delete first node\n");
    printf("4. Delete node after position\n");
    printf("5. Display\n");
    printf("0. Exit\n");
    printf("===============================================\n");

    do 
    {
        printf("\n===============================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                printf("===============================================\n");
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position before which to insert: ");
                scanf("%d", &position);
                insertBeforePosition(&head, position, value);
                printf("===============================================\n");
                break;
            case 3:
                deleteFirstNode(&head);
                printf("===============================================\n");
                break;
            case 4:
                printf("Enter position after which to delete node: ");
                scanf("%d", &position);
                deleteAfterPosition(&head, position);
                break;
            case 5:
                display(head);
                break;
            case 0:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0 && choice < 6);

    return 0;
}
