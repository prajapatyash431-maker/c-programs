#include <stdio.h>

int main()
{
    // Program to check character is Uppercase or Lowercase

    char a;
    printf("Enter character : ");
    scanf(" %c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        printf("%c is Uppercase character", a);
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("%c is Lowercase character", a);
    }
    else
    {
        printf("%c is not an alphabet character\n", a);
    }

    return 0;
}