#include <stdio.h>

int main()
{
    // Program to print the number from 0 to n. By using for loop.

    int n;
    printf("Enter no ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}