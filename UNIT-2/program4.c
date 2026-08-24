// Write a program to find the factorial of a given integer number using stack

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

/* Push value into stack */
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

/* Pop value from stack */
int pop()
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    int n, i;
    long int fact = 1;


    printf("Enter a number: ");
    scanf("%d", &n);

    /* Push numbers into stack */
    for (i = 1; i <= n; i++)
    {
        push(i);
    }

    /* Pop numbers and calculate factorial */
    while (top != -1)
    {
        fact = fact * pop();
    }

    /* Display factorial */
    printf("Factorial of %d = %ld\n", n, fact);

    return 0;
}
