#include <stdio.h>
#include <stdlib.h>

/* Program to delete a specific node from a doubly linked list */

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
    int n, i, value;

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

    printf("Enter node to delete: ");
    scanf("%d", &value);

    /* Search for specific node */
    temp = head;

    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Node not found.\n");
    }
    else
    {
        if(temp->prev != NULL)
        {
            temp->prev->next = temp->next;
        }
        else
        {
            head = temp->next;
        }

        if(temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }

        free(temp);

        printf("Node deleted successfully.\n");
    }

    /* Display list */
    printf("Doubly Linked List: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
