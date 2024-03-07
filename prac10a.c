#include <stdio.h> 
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
void insert(struct node **root, int val) 
{
    struct node *temp = *root;
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = val;
    new->left = NULL;
    new->right = NULL;

    if (temp == NULL) 
	{
        *root = new;
        printf("%d has been inserted \n", new->data);
        printf("===============================================\n");
        return;
    }

    if (temp->data == val) 
	{
        printf("Enter valid data\n");
        printf("===============================================\n");
        return;
    } 
	else if (temp->data < val) 
	{
        if (temp->right == NULL) 
		{
            temp->right = new;
            printf("%d has been inserted \n", new->data);
            printf("===============================================\n");
            return;
        } 
		else 
		{
            insert(&(temp->right), val);
        }
    } 
	else 
	{
        if (temp->left == NULL) 
		{
            temp->left = new;
            printf("%d has been inserted \n", new->data);
            printf("===============================================\n");
            return;
        } 
		else 
		{
            insert(&(temp->left), val);
        }
    }
}


void post(struct node**head)
{
	struct node *temp=*head;
	if(temp==NULL)
	{
		printf("First thing first enter values in node\n");
        printf("===============================================\n");
		return;
	}
	if(temp->left!=NULL)
	{
        post(&temp->left);
	}
	printf("%d ",temp->data);
	if(temp->right!=NULL)
	{
        post(&temp->right);
	}
}

void main()
{
	struct node *root;
	root=NULL;
	int choice;
    printf("===============================================\n");
	printf("Enter   1 for insertion\n\t2 for display in infix order");
    printf("\n===============================================\n");
	do
	{
		printf("\n===============================================\n");
        printf("Which operation do you wonna perform : ");
        scanf("%d", &choice);
        switch(choice)
		{
			case 1: printf("Enter value that yo want to insert : ");
			        int val;
					scanf("%d",&val);
			        insert(&root,val);
			        break;
			case 2: post(&root);
			        break;
		}
	}while(choice!=0 && choice < 3);
    
}