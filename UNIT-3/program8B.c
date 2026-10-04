#include <stdio.h>
#include <stdlib.h>

/* Program to delete the last node from a doubly linked list */

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

    /* Create doubly linked list */
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

    /* Delete last node */
    temp = head;

    if(head != NULL)
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        if(temp->prev != NULL)
        {
            temp->prev->next = NULL;
        }
        else
        {
            head = NULL;
        }

        free(temp);
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
