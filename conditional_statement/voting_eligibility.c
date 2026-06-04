#include <stdio.h>

int main()
{
    // Program to check Voting eligibility.
    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for voting");
    }
    else if (age >= 1 && age < 18)
    {
        printf("You are under age");
    }
    else
    {
        printf("Invalid age");
    }
    
    return 0;
}