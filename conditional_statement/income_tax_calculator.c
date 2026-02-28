#include <stdio.h>

int main()
{
    // Program to calculate slab-wise income tax

    int income;
    float tax = 0;
    printf("Enter income : ");
    scanf("%d", &income);
    if (income < 0)
    {
        printf("Invalid income");
        return 0;
    }

    if (income <= 250000)
    {
        printf("No tax\n");
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {

        tax = ((income - 250000) * 0.05);
    }
    else if (income > 500000 && income <= 1000000)
    {

        tax = ((500000 - 250000) * 0.05) + ((income - 500000) * 0.2);
    }
    else
    {

        tax = ((500000 - 250000) * 0.05) + ((1000000 - 500000) * 0.2) + ((income - 1000000) * 0.3);
    }
    printf("Your income is : %d \n", income);
    printf("Your tax amount is : %.2f", tax);
    return 0;
}