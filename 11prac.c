#include <stdio.h> 
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
void insert(struct node **root,int val)
{
	struct node *temp=*root;
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->left=NULL;
	new->right=NULL;
	if (temp==NULL)
	{
		*root=new;
		printf("%d has been inserted \n",new->data);
		printf("===============================================\n");
		return;
	}
	if(temp->data == val)
	{
		printf("Enter valid data\n");
		printf("===============================================\n");
		return;
	}
	else if(temp->data<val && temp->right==NULL)
	{
		temp->right=new;
        printf("%d has been inserted \n",temp->right->data);
		printf("===============================================\n");
		return;
	}
	else if(temp->data>val && temp->left==NULL)
	{
		temp->left=new;
        printf("%d has been inserted \n",temp->left->data);
		printf("===============================================\n");
		return;
	}
	else
	{
		free(new);
		if(val>temp->data)
        {
	        insert(&temp->right,val);
		}
		else
		{
		    insert(&temp->left,val);
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
	if(temp->right!=NULL)
	{
        post(&temp->right);
	}
	printf("%d ",temp->data);
}
void pre(struct node**head)
{
	struct node *temp=*head;
	if(temp==NULL)
	{
		printf("First thing first enter values in node\n");
        printf("===============================================\n");
		return;
	}
	printf("%d ",temp->data);
	if(temp->left!=NULL)
	{
        post(&temp->left);
	}
	if(temp->right!=NULL)
	{
        post(&temp->right);
	}
}
void in(struct node**head)
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
	printf("Enter   1 for insertion\n\t2 for display in prefix order");
	printf("\n\t3 for display in postfix order\n\t4 for display in infix order");
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
			case 2: pre(&root);
			        break;
            case 3: post(&root);
			        break;
            case 4: in(&root);
			        break;
		}
	}while(choice!=0 && choice < 5);
    
}