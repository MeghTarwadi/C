#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    int choise;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    int flag;

    int a, k;
    do
    {
        printf("\nTO PERFORM \n\t INSERT PRESS 1 \n\t DELETE PRESS 2\n\t PUSH PRESS 3\n\t PEEP PRESS 4 \n\t END OPERATIONS PRESS 6 \n\t\t\t\t");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("\nInsert element in LL");
            printf("\nEnter 0 to exit from insertion");
            for (int k = 0; a != 0; k++)
            {
                printf("\nEnter %d element in LL  ", k);
                scanf("%d", &a);
                if (a != 0)
                {
                    ptr->data = a;
                    printf("The address of %d next node is %d and current node is %d", k, &ptr->next,&ptr);
                    ptr = ptr->next;

                }
                else
                {
                    ptr->next = NULL;
                    printf("The address of %d element is %d", k, &ptr->next->next);
                }
            }
            break;
        case 4:
            do
            {
                a++;
                printf("\nElement in %d Link List is %d", a, ptr->data);
                ptr->next = ptr;
            }
            while (ptr->next->next != NULL);
            break;
        case 6:
            free(ptr);
            free(head);
            flag++;
            break;
        }
        a = 0;
        struct node *ptr = head;
    } while (flag != 1);
}