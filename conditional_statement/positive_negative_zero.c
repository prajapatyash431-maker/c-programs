#include <stdio.h>

int main()
{
    // Program to check given number is positive, negative or zero.
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number %d is positive", num);
    }
    else if (num < 0)
    {
        printf("Number %d is nagative ", num);
    }
    else
    {
        printf("number %d is zero", num);
    }

    return 0;
}