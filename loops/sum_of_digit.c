#include <stdio.h>

int main ()
{   
    // Program to print sum of all digit in a number.

    int sum, num, a;
    printf("Enter number : ");
    scanf("%d",&num);
    for (sum = 0; num!= 0 ; )
    {
        a = num % 10;
        sum = sum + a;
        num = num / 10;
    }
    printf("Sum of digit in a number is : %d ",sum);
    
    return 0;
}