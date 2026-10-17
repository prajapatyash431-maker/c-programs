#include <stdio.h>

int main ()
{   
    // Program to print number in reverse order.

    int num ,reverse,digit;
    printf("Enter num :");
    scanf("%d",&num);

    for (reverse = 0; num != 0 ; reverse)
    {
        digit = num % 10;
        reverse = (reverse * 10 )+ digit ;
        num = num/10;
  }
  printf("Number in reverse order : %d",reverse);

    return 0;
}