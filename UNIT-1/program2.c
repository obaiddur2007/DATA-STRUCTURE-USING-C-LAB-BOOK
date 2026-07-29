#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10.0;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}
