#include <stdio.h>

int main()
{   // Program to calculate the area of a rectangle
    // Formula used : Length * Breadth
    int length, breadth;

    printf("Enter the value of lendth = ");
    scanf("%d", &length);
    
    printf("Enter the value of breadth = ");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);

    return 0;
}