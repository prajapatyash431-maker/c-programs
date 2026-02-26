#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    int choice;

    printf(" \nChoose operation: \n");
    printf("1 - Addition \n");
    printf("2 - Subtraction \n");
    printf("3 - Multiplication \n");
    printf("4 - Division \n");

    printf("Enter choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("addition %d \n", a + b);
        break;
    case 2:
        printf("subtraction %d \n", a - b);
        break;
    case 3:
        printf("multiplication %d \n", a * b);
        break;
    case 4:
        if (b == 0)
            printf("Cannot divide by 0\n");
        else
            printf("division %.2f \n", (float)a / b);
        break;
    default:
        printf("invalid operation");
        break;
    }

    return 0;
}