/* Write a program to perform insert, delete, height and total number of nodes operations on Binary Search Tree. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* insert(struct node *root, int value)
{
    if (root == NULL)
    {
        root = (struct node*)malloc(sizeof(struct node));
        root->data = value;
        root->left = root->right = NULL;
        return root;
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

struct node* findMin(struct node *root)
{
    while (root != NULL && root->left != NULL)
        root = root->left;

    return root;
}

struct node* deleteNode(struct node *root, int value)
{
    struct node *temp;

    if (root == NULL)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int height(struct node *root)
{
    int leftHeight, rightHeight;

    if (root == NULL)
        return 0;

    leftHeight = height(root->left);
    rightHeight = height(root->right);

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

int countNodes(struct node *root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root = NULL;
    int choice, value;

    do
    {
        printf("\n\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Height of Tree");
        printf("\n4. Total Number of Nodes");
        printf("\n5. Display Tree");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("Height of Tree: %d", height(root));
                break;

            case 4:
                printf("Total Number of Nodes: %d", countNodes(root));
                break;

            case 5:
                printf("Binary Search Tree: ");
                inorder(root);
                break;

            case 6:
                printf("Program terminated.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 6);

    return 0;
}
