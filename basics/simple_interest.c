#include <stdio.h>

int main()
{
    // Program to calculate Simple interest
    // Formula used : (P*R*T)/100

    float p, r, t, SI;

    printf("Enter Principle : ");
    scanf("%f", &p);
    printf("Enter Rate of interest : ");
    scanf("%f", &r);
    printf("Enter Time (in year) : ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;
    printf("Simple Interest is : %f", SI);
    
    return 0;
}