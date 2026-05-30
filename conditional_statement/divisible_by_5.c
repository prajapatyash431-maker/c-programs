#include <stdio.h>

int main()
{
    // Program to check given number is divisible by 5 or not.
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("Number %d is divisible by 5 ", num);
    }
    else
    {
        printf("Number %d is not divisible by 5 ", num);
    }

    return 0;
}