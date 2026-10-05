#include <stdio.h>

int main()
{
    // program to check number is palindrome or not.

    int num, orignal_num, palindrome, digit;
    printf("Enter number : ");
    scanf("%d", &num);

    orignal_num = num;

    for (palindrome = 0; num != 0;)
    {
        digit = num % 10;
        palindrome = palindrome * 10 + digit;
        num = num / 10;
    }
    printf("Number in reverse order : %d\n", palindrome);

    if (orignal_num == palindrome)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

    return 0;
}