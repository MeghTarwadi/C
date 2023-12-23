#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void push(struct node **head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *temp=*head;
    int value;
    if(new==NULL)
    {
        printf("Overflow-memory full \n");
        printf("===============================================\n\n");
    }
    printf("Enter value that you want to push: ");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
        printf("%d has been pushed successfully\n",new->data);
        printf("===============================================\n\n");
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
    printf("%d has been pushed successfully\n",temp->next->data);
    printf("===============================================\n\n");
}
void display(struct node **head)
{
    struct node *temp=*head;
    printf("data : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n===============================================\n\n");
}
void pop(struct node **head)
{
    struct node *temp=*head;
    if(temp==NULL)
    {
        printf("The node which doesn\'t exitst can\'t be deleted\n");
        printf("===============================================\n\n");
        return;
    }
    else
    {
        printf("%d has been poped successfully\n",temp->data);
        *head=temp->next;
        printf("===============================================\n\n");
        return;
    }
}

int main() 
{
    int choice;
    struct node *head;
    printf("===============================================");
    printf( "\nEnter 1. for push \n      2. for display \n      3. for pop\n      any number to exit\n");
    printf("===============================================\n\n");
        
    do
    {
        printf("===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d",&choice);
        switch (choice) 
        {
            case 1: push(&head);
                    break;
            case 2: display(&head);
                    break;
            case 3: pop(&head);
                    break;
        }
    }while(choice<4);
    printf( "Exited successfully\n");
    printf("===============================================\n");
    return 0;
}
