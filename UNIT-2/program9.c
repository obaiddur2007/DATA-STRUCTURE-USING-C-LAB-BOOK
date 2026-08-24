/* Program-9
   Program to perform insert, delete and display operations using a simple queue */

#include <stdio.h>

int main()
{
    int queue[5];
    int front = -1, rear = -1;
    int choice, value, i;

    do
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            if(rear == 4)
            {
                printf("Queue is Full");
            }
            else
            {
                printf("Enter value: ");
                scanf("%d", &value);

                if(front == -1)
                    front = 0;

                rear++;
                queue[rear] = value;

                printf("Value inserted");
            }
        }
        else if(choice == 2)
        {
            if(front == -1 || front > rear)
            {
                printf("Queue is Empty");
            }
            else
            {
                printf("Deleted value = %d", queue[front]);
                front++;

                if(front > rear)
                {
                    front = -1;
                    rear = -1;
                }
            }
        }
        else if(choice == 3)
        {
            if(front == -1)
            {
                printf("Queue is Empty");
            }
            else
            {
                printf("Queue elements are: ");

                for(i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
            }
        }
        else if(choice == 4)
        {
            printf("Program Ended");
        }
        else
        {
            printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}
