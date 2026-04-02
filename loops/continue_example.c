#include <stdio.h>

int main()
{
    // Program to skip number 6, Using continue statement.
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) // Skip
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}