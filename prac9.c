#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *before;
};

void front(struct node **head)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->before=NULL;
    new->next=NULL;

    struct node *temp=*head;
    if(new==NULL)
    {
        printf( "Couldn\'t add node due to lack of memory\n");
        printf("===============================================\n");
        return;
    }
    printf("Enter value that you want to enter: ");
    scanf("%d",&(new->data));
    if(*head==NULL)
    {
        *head=new;
        printf("%d has been pushed \n",new->data);
        printf("===============================================\n");
    }
    else
    {
        new->next=temp;
        temp->before=new;
        *head=new;
        printf("%d has been pushed infront of %d\n",new->data,temp->data);
        printf("===============================================\n");
    }
}

void end(struct node **head)
{
    struct node *new=(struct node*)malloc(sizeof(struct node)),*temp=*head;
    new->before=NULL;
    new->next=NULL;
    if(new==NULL)
    {
        printf( "Couldn\'t add node due to lack of memory\n");
        printf("===============================================\n");
        return;
    }
    printf("Enter value that you want to enter: ");
    scanf("%d",&(new->data));
    if(*head==NULL)
    {
        *head=new;
        printf("%d has been pushed\n",new->data);
        printf("===============================================\n");
        return;
    }
    for(temp;temp->next!=NULL;temp=temp->next){}
    temp->next=new;
    new->before=temp;
    new->next=NULL;
    printf("%d has been pushed after %d\n",new->data,temp->data);
    printf("===============================================\n");
}

void dlast(struct node **head)
{
    if(*head==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    struct node *temp=*head,*temp1;
    for(temp;temp->next!=NULL;temp=temp->next){}
    if(temp==*head)
    {
        *head=NULL;
        free(temp);
    }
    temp1=temp;
    temp=temp->before;
    printf("%d has been deleted\n",temp1->data);
    printf("===============================================\n");
    temp->next=NULL;
    free(temp1);
}

void dbefore(struct node **head)
{
    struct node *temp=*head,*temp1;
    if((*head==NULL)||(temp->next==NULL && temp==*head))
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    int value;
    printf("Enter value: ");
    scanf("%d",&value);
    for(temp;temp->data!=value && temp->next!=NULL;temp=temp->next){}
    if((temp->data==value && temp==*head))
    {
        printf("The node which doesn\'t exitst can\'t be deleted\n");
        printf("(First node detected)\n");
        printf("===============================================\n");
    }
    else if(temp->data==value && temp->next==NULL && temp->before->before==NULL)
    {
        temp1=temp->before;
        temp->before=NULL;
        *head=temp;
        free(temp1);
    }
    else if(temp->data==value)
    {
        temp1=temp->before;
        if(temp1->before==NULL)
        {
            *head=temp;
            printf("%d has been deleted\n",temp1->data);
            printf("===============================================\n");
            free(temp1);
            return;
        }
        else
        {
            temp->before=temp1->before;
            temp=temp->before;
            temp->next=temp1->next;
            printf("%d has been deleted\n",temp1->data);
            printf("===============================================\n");
            free(temp1);
        }
    }
    else
    {
        printf("The entered value doesn\'t exists\n");
        printf("===============================================\n");
    }
}

void display(struct node **head)
{
    if(*head==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    struct node *temp=*head;
    printf("data :");
    for(temp;temp!=NULL;temp=temp->next)
    {
        printf(" %d",temp->data);
    }
    printf("\n===============================================\n");
}


void main()
{
    int c;
    struct node *head;
    printf("\n===============================================\n");
    printf("To perform");
    printf(" (1) Insert a node at the front of the linked list :\n");
    printf("\t   (2) Insert a node at the end of the linked list   :\n");
    printf("\t   (3) Delete a last node of the linked list         :\n");
    printf("\t   (4) Delete a node before specified position       :\n");
    printf("\t   (5) Display linked list                           :  ");
    printf("\n===============================================\n");


    do
    {
        printf("\n===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d", &c);
        switch(c)
        {
            case 1:   front(&head);
                        break;
            case 2:   end(&head);
                        break;
            case 3:   dlast(&head);
                        break;
            case 4:   dbefore(&head);
                        break;
            case 5:   display(&head);
                        break;
        }
    } while (c<6 && c!=0);
    printf("Exited successfully.\n");
    printf("===============================================\n");
}