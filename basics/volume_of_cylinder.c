#include <stdio.h>
int main()
{
    // Program to calculate the volume of a cylinder
    // Formula used: V = π r² h

    int radius;
    int height;

    float pi;
    printf("Enter the value of radius = ");
    scanf("%d", &radius);

    printf("Enter the value of height = ");
    scanf("%d", &height);

    printf("Enter the value of Pi = ");
    scanf("%f", &pi);

    float ans = pi * radius * radius * height;
    printf("Enter radius =%f ", ans);

    return 0;
}