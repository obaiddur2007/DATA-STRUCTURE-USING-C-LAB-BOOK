// Program to find factorial of a number using recursion (stack)

#include <stdio.h>

// Recursive function to find factorial
int factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive call
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Call recursive function
    result = factorial(n);

    // Display factorial
    printf("Factorial of %d = %d\n", n, result);

    return 0;
}
