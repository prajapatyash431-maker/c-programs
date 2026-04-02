#include <stdio.h>

int main ()
{   // Program to print the table of a number, given by the user.
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",n*i);
    }

    return 0;
}