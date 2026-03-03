#include <stdio.h>

int main()
{
    /* Decrement operator (i-- or --i)
       i-- (post decrement)
       --i (pre decrement)
    */
    int i = 1;
    // post decrement
    printf("%d \n", i--);
    printf("%d \n", i);

    // pre decrement
    printf("%d \n", --i);
    printf("%d \n", i);

    return 0;
}