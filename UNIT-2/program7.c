/* Program-7
   Program to find the Smallest Common Divisor of a given number */

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("Smallest Common Divisor = %d", i);
            break;
        }
    }

    return 0;
}
