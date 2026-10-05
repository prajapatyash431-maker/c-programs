#include <stdio.h>

int main()
{   
    // Program to print digit count of any number; 
    
    int num, count = 0;
    printf("Enter number : ");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        for (count = 0; num != 0; count++)
        {
            printf("Number is divided by 10 : %d\n", num);
            num = num / 10;
        }
    }
    printf("Digit of number : %d", count);

    return 0;
}