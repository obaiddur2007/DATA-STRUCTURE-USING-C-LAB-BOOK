/* Program-5
   Program to find the power of a given number using stack */

#include <stdio.h>

int main()
{
    int stack[10];
    int top = -1;
    int num, power;
    int result = 1;
    int i;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter power: ");
    scanf("%d", &power);

    for(i = 1; i <= power; i++)
    {
        top++;
        stack[top] = num;
    }

    while(top >= 0)
    {
        result = result * stack[top];
        top--;
    }

    printf("Power = %d", result);

    return 0;
}
