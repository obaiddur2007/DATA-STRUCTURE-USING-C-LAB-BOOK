#include <stdio.h>
#include <stdlib.h>

/* Program to delete a specific node from a singly linked list */

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *temp, *deleteNode;
    int value;

    /* Create linked list */
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->data = 30;

    head->next->next->next = NULL;

    printf("Enter node value to delete: ");
    scanf("%d", &value);

    /* Delete first node if it is the specific node */
    if(head->data == value)
    {
        deleteNode = head;
        head = head->next;
        free(deleteNode);
    }
    else
    {
        temp = head;

        /* Search for the specific node */
        while(temp->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        if(temp->next == NULL)
        {
            printf("Node not found.\n");
        }
        else
        {
            /* Delete the specific node */
            deleteNode = temp->next;
            temp->next = deleteNode->next;
            free(deleteNode);

            printf("Node deleted successfully.\n");
        }
    }

    /* Display linked list */
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
