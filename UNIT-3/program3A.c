#include <stdio.h>
#include <stdlib.h>

/* Program to insert a node after a specific node in a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int value, after;

    /* Create the first node */
    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter first node data: ");
    scanf("%d", &head->data);

    head->next = NULL;

    /* Input the value after which node is inserted */
    printf("Enter node value after which to insert: ");
    scanf("%d", &after);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter new node data: ");
    scanf("%d", &value);

    newNode->data = value;

    /* Search for the specific node */
    temp = head;

    while(temp != NULL && temp->data != after)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Specific node not found.\n");
    }
    else
    {
        /* Insert the new node after specific node */
        newNode->next = temp->next;
        temp->next = newNode;

        printf("Node inserted successfully.\n");
    }

    /* Display the linked list */
    printf("Linked List: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
