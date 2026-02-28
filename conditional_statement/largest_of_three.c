#include <stdio.h>
int main()
{
    /*
    Program: Largest of Three Numbers
    Description: This program takes three integers as input
    and determines the largest number using if-else conditions.
    */

    int a, b, c;

    printf("Enter the value of a, b, c =");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest number is a = %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest number is b = %d", b);
    }
    else
        printf("Largest number is c = %d", c);

    return 0;
}