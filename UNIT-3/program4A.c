#include <stdio.h>
#include <stdlib.h>

/* Program to delete the first node from a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *temp;

    /* Create linked list */
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->data = 30;

    head->next->next->next = NULL;

    /* Delete first node */
    temp = head;
    head = head->next;
    free(temp);

    /* Display linked list */
    printf("Linked List after deleting first node: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
