#include <stdio.h>

int main()
{
    /* Increment operator (i++ or ++i)
       i++ (post increment)
       ++i (pre increment)
    */
    int i = 1;
    // post increment
    printf("%d \n", i++);
    printf("%d \n", i);

    // pre increment
    printf("%d \n", ++i);
    printf("%d \n", i);

    return 0;
}