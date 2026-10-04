#include <stdio.h>
#include <stdlib.h>

/* Program to insert a node at the end of a doubly linked list */

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode;
    struct Node *temp;
    int n, i;

    /* Create initial doubly linked list */
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);

        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    /* Insert node at end */
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data to insert at end: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if(head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    /* Display list */
    printf("\nDoubly Linked List: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
