#include <stdio.h>

int main ()
{   // Program to print N natural number in riverse order.
    int i, n;
    printf("Enter n number : ");
    scanf("%d",&n);
    i = n;
    while (i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}