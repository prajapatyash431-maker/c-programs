#include <stdio.h>

int main()
{
    // Program to print the number from 0 to n, By using While loop.
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}