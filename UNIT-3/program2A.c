#include <stdio.h>
#include <stdlib.h>

/* Program to insert a node at the starting of a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode;
    struct Node *temp;

    /* Create a new node */
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    /* Insert node at the beginning */
    newNode->next = head;
    head = newNode;

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
