#include <stdio.h>

int main()
{   
    // Program to check even or odd number.
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is even ");
    }
    else
        printf("Number is odd ");

    return 0;
}