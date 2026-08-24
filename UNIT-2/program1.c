// Program to implement stack using array with Push, Pop, Print, Peek, Peep, Change and Exit operations.

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Push operation
void push()
{
    int value;

    if (top == SIZE - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("Value inserted successfully\n");
    }
}

// Pop operation
void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Deleted value: %d\n", stack[top]);
        top--;
    }
}

// Print operation
void print()
{
    int i;

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Peek operation
void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

// Peep operation
void peep()
{
    int position;

    printf("Enter position from top: ");
    scanf("%d", &position);

    if (position <= 0 || position > top + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Element: %d\n", stack[top - position + 1]);
    }
}

// Change operation
void change()
{
    int position, value;

    printf("Enter position from top: ");
    scanf("%d", &position);

    if (position <= 0 || position > top + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Enter new value: ");
        scanf("%d", &value);

        stack[top - position + 1] = value;

        printf("Value changed successfully\n");
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. Change\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 4:
                peek();
                break;

            case 5:
                peep();
                break;

            case 6:
                change();
                break;

            case 7:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 7);

    return 0;
}
