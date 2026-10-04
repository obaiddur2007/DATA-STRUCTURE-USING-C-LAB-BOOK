#include <stdio.h>
#include <stdlib.h>

/* Program to delete the last node from a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *temp, *last;

    /* Create linked list */
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->data = 30;

    head->next->next->next = NULL;

    /* Delete last node */
    temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    last = temp->next;
    temp->next = NULL;
    free(last);

    /* Display linked list */
    printf("Linked List after deleting last node: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
