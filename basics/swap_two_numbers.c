#include <stdio.h>

int main()
{   // Program to swap two number.
    int a , b, temp;

    printf("Enter first number : ");
    scanf("%d", &a);
    
    printf("Enter second number : ");
    scanf("%d", &b);
    
    printf("\nBefore swapping \n");
    printf("a = %d\tb = %d \n", a, b);
    
    // Swapping 
    temp = a;
    a = b;
    b = temp;
    
    printf("\nAfter swapping\n");
    printf("a = %d b = %d ", a, b);

    return 0;
}