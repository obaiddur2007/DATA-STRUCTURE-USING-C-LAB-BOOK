/* Program-8
   9Program to find Minimum and Maximum numbers from the given array using Recursion */

#include <stdio.h>

int findMax(int a[], int n)
{
    int max;

    if(n == 1)
        return a[0];

    max = findMax(a, n - 1);

    if(a[n - 1] > max)
        return a[n - 1];
    else
        return max;
}

int findMin(int a[], int n)
{
    int min;

    if(n == 1)
        return a[0];

    min = findMin(a, n - 1);

    if(a[n - 1] < min)
        return a[n - 1];
    else
        return min;
}

int main()
{
    int a[10], n, i;
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = findMin(a, n);
    max = findMax(a, n);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);

    return 0;
}
