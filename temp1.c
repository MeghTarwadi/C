#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char a;
    struct node* next;
};

void insert(struct node**head,char data)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("overflow");
        return ;
    }
    new->a=data;
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
    }
    else
    {
        struct node *temp=*head;
        for(temp;temp->next!=NULL;temp=temp->next){}
        temp->next=new;
    }
}
void StringRev(struct node**head,int len)
{
    char k[len];
    for(int i=0;i<len;i++)
    {
        struct node *temp=*head;
        struct node *tempp;
        while(temp->next!=NULL)
        {
            tempp=temp;
            temp=temp->next;
        }
        k[i]=temp->a;
        tempp->next=NULL;
    }
    puts(k);
}

void main()
{
    struct node *head;
    char temp[99];
    printf("Enter string: ");
    gets(&temp);
    for(int i=0;i<strlen(temp);i++)
    {
        insert(&head,temp[i]);
    }
    printf("Reversed string: ");
    StringRev(&head,strlen(temp));
}
