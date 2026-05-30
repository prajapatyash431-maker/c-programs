#include <stdio.h>

int main()
{
    // Pprogram to print last digit.
    int num, lastDigit;

    printf("Enter number : ");
    scanf("%d", &num);

    lastDigit = num % 10;

    printf("last digit %d", lastDigit);

    return 0;
}