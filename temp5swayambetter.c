#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void push_front(struct node **head)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf( "Couldn\'t add node due to lack of memory\n");
        printf("===============================================\n");
    }
    printf( "Enter data: ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
        printf("%d has been pushed \n",new->data);
        printf("===============================================\n");
    }
    else
    {
        new->next=*head;
        *head=new;
        printf("%d has been pushed infront of %d\n",new->data,new->next->data);
        printf("===============================================\n");
    }
}

void push_last(struct node **head)
{
    struct node *new = (struct node*)malloc(sizeof(struct node)),*temp=*head;
    if(new==NULL)
    {
        printf( "Couldn\'t add node due to lack of memory\n");
        printf("===============================================\n");
    }
    printf( "Enter data: ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
        printf("%d has been pushed \n",new->data);
        printf("===============================================\n");
    }
    else
    {
        for(temp;temp->next!=NULL;temp=temp->next){}
        temp->next=new;
        printf("%d has been pushed after %d\n",temp->next->data,temp->data);
        printf("===============================================\n");
    }
}

void ascending_order(struct node **head)
{
    struct node *ptrm,*ptr,*max,*current,*temp;
    ptrm=*head;
    ptr=*head;

    if(ptrm==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    if(ptrm->next==NULL)
    {
        printf("Sorted in ascending oreder sucessfully\n");
        printf("===============================================\n");
        return;
    }
    while(ptr!=NULL)
    {
        max=ptr;
        current=max->next;

        if(current==NULL)
        {
            for(temp=ptrm;temp->next!=max;temp=temp->next){}
            temp->next=NULL;
            ptr->next=ptrm;
            ptrm=ptr;
            *head=ptrm;
            printf("Sorted in ascending oreder sucessfully\n");
            printf("===============================================\n");
            return;
        }
        while(current!=NULL)
        {
            if( current->data  >=  max->data )
            {
                temp=max;
                max=current;
                current=temp;
            }
            current=current->next;
        }
        if(max==*head && max==ptrm)
        {
            ptr=ptr->next;
        }
        else if(max==ptr)
        {
            for(temp=ptrm;temp->next!=max;temp=temp->next){}
            temp->next=temp->next->next;
            ptr=ptr->next;
            max->next=ptrm;
            ptrm=max;
        }
        else
        {
            for(temp=ptrm;temp->next!=max;temp=temp->next){}
            temp->next=temp->next->next;
            max->next=ptrm;
            ptrm=max;
        }
    }
}

void pop_first(struct node **head)
{
    struct node*ptr=*head;
    if(ptr==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
    }
    else
    {
        printf("First element popped out is %d\n",ptr->data);
        printf("===============================================\n");
        *head=ptr->next;
        free(ptr);
    }
}

void pop_before(struct node **head)
{
    struct node *temp=*head,*temp1=NULL,*temp0=NULL;
    if(temp==NULL || temp->next==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    int value;
    printf( "Enter value: ");
    scanf("%d",&value);
    if(temp->data==value)
    {
        printf("The node which doesn\'t exitst can\'t be deleted\n");
        printf("(First node detected)\n");
        printf("===============================================\n");
        return;
    }
    if(temp->next->data==value)
    {
        *head=temp->next;
        printf("%d has been deleted\n",temp->data);
        printf("===============================================\n");
        free(temp);
        return;
    }
    while(temp->data != value)
    {
        temp1=temp0;
        temp0=temp;
        temp=temp->next;
        if(temp==NULL)
        {
            printf("The entered value doesn\'t exists\n");
            printf("===============================================\n");
            return;
        }
    }
    printf("%d has been deleted\n",temp1->next->data);
    temp=temp->next;
    temp1->next=temp1->next->next;
    printf("===============================================\n");
}

void pop_after(struct node **head)
{
    struct node *temp=*head,*temp1;
    if(temp==NULL || temp->next==NULL)
    {
        printf("First thing first enter values in node\n");
        printf("===============================================\n");
        return;
    }
    int value;
    printf( "Enter value: ");
    scanf("%d",&value);
    for(temp;temp!=NULL && temp->data!=value;temp=temp->next){}
    if(temp==NULL)
    {
        printf("The entered value doesn\'t exists\n");
        printf("===============================================\n");
    }
    else if(temp->next==NULL)
    {
        printf("The node which doesn\'t exitst can\'t be deleted\n");
        printf("(Last node detected)\n");
        printf("===============================================\n");
    }
    else
    {
        printf("%d has been deleted\n",temp->next->data);
        printf("===============================================\n");
        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
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

int main()
{
    int choice;
    struct node*head;
    head==NULL;
    printf("\n===============================================");
    printf("\nEnter 1. for push at front\n      2. for push at end\n      3. ascending order\n      ");
    printf("4. for pop at first\n      5. for pop before specific value\n      ");
    printf("6. for pop after specific value\n      7. display\n      any number to exit");
    printf("\n===============================================\n");   
    do
    {
        printf("\n===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: push_front(&head);
                    break;
            case 2: push_last(&head);
                    break;
            case 3: ascending_order(&head);
                    break;
            case 4: pop_first(&head);
                    break;
            case 5: pop_before(&head);
                    break;
            case 6: pop_after(&head);
                    break;
            case 7: display(&head);
                    break;
        }
    } while (choice<8 && choice!=0);
    printf("Exited successfully.\n");
    printf("===============================================\n");
    return 0;
}