#include <stdio.h>
#include <stdlib.h>

/* Program to insert a node before a specific node in a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int value, before;

    /* Create the first node */
    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter first node data: ");
    scanf("%d", &head->data);

    head->next = NULL;

    /* Input the value before which node is inserted */
    printf("Enter node value before which to insert: ");
    scanf("%d", &before);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter new node data: ");
    scanf("%d", &value);

    newNode->data = value;

    /* Check if insertion is before the first node */
    if(head->data == before)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        temp = head;

        /* Search for the node before the specific node */
        while(temp->next != NULL && temp->next->data != before)
        {
            temp = temp->next;
        }

        if(temp->next == NULL)
        {
            printf("Specific node not found.\n");
        }
        else
        {
            /* Insert the new node before specific node */
            newNode->next = temp->next;
            temp->next = newNode;

            printf("Node inserted successfully.\n");
        }
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
