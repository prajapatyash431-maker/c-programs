#include <stdio.h>

int main() 
{
    // Program to calculate yearly salary from mounthly salary.
    int mounthly_salary;
    int yearly_amount;

    printf("Enter mounthly salary : ");
    scanf("%d", &mounthly_salary);

    yearly_amount = mounthly_salary * 12;

    printf("Yearly amount of salary : %d", yearly_amount);

    return 0;
}