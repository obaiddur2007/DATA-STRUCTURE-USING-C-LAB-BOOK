#include <stdio.h>
#include <stdlib.h>

/* Program to insert a node before a specific node in a doubly linked list */

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
    int n, i, specific, value;

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

    printf("Enter the specific node: ");
    scanf("%d", &specific);

    printf("Enter data to insert: ");
    scanf("%d", &value);

    /* Search for specific node */
    temp = head;

    while(temp != NULL && temp->data != specific)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Specific node not found.\n");
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = temp;
        newNode->prev = temp->prev;

        if(temp->prev != NULL)
        {
            temp->prev->next = newNode;
        }
        else
        {
            head = newNode;
        }

        temp->prev = newNode;

        printf("Node inserted successfully.\n");
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
