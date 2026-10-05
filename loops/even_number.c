#include <stdio.h>

int main()
{
    // Program to print even number from 1 to 100.

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even number %d\n", i);
        }
    }
    return 0;
}