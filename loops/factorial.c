#include <stdio.h>

int main ()
{   
    // Program to print factorial of n numbers.

    int n, factorial;
    printf("Enter N number : ");
    scanf("%d",&n);

    factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        factorial = factorial * i;
    }
    
    printf("Factorial of n number is : %d",factorial);

    return 0;
}