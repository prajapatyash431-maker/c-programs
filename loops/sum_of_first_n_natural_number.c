#include <stdio.h>

int main()
{
    // Program to print the sum of first n natural number.
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d \n", sum);

    return 0;
}