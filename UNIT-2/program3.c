// Write a program to print strings in reverse order using stack.

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Push character into stack */
void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = ch;
    }
}

/* Pop character from stack */
char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    char str[MAX];
    int i;

    /* Take string from user */
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    /* Remove newline character */
    str[strcspn(str, "\n")] = '\0';

    /* Push all characters into stack */
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("\nReversed String: ");

    /* Pop all characters from stack */
    while (top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}
