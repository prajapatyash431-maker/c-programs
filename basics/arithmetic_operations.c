#include <stdio.h>
int main()
{
    /*
    Program: Basic Arithmetic Operations
    Description: Takes two integers as input and performs
    addition, subtraction, multiplication, and safe division using if-else condition.
    */
    int a, b;

    printf("Enter the value of a and b = ");
    scanf("%d %d", &a, &b);

    printf("Addition of two number = %d\n", a + b);
    printf("subtraction of two number = %d \n", a - b);
    printf("multiplication of two number = %d \n", a * b);
    if (b != 0)
    {
        printf("Division of two numbers = %d \n", a / b);
    }
    else
    {
        printf("Division not possible (b cannot be zero)\n");
    }

    return 0;
}