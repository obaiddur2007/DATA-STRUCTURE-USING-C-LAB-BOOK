#include <stdio.h>
#include <stdlib.h>

/* Program to create and display a singly linked list */

struct node
{
    int data;
    struct node *next;
};

/* Create a linked list */
struct node* create()
{
    struct node *head = NULL;
    struct node *newnode;
    struct node *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    return head;
}

/* Display the linked list */
void display(struct node *head)
{
    struct node *temp = head;

    if(head == NULL)
    {
        printf("Linked list is empty.");
        return;
    }

    printf("\nLinked List: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct node *head;

    /* Create and display the linked list */
    head = create();
    display(head);

    return 0;
}
