#include <stdio.h>

int main()
{
    // Program to calculate total, percentage and determine pass or fail based on marks

    int mark_01;
    int mark_02;
    int mark_03;
    printf("Enter mark of first subject : ");
    scanf("%d", &mark_01);
    printf("Enter mark of second subject : ");
    scanf("%d", &mark_02);
    printf("Enter mark of third subject : ");
    scanf("%d", &mark_03);

    printf("The marks are %d %d and %d \n", mark_01, mark_02, mark_03);

    int total = mark_01 + mark_02 + mark_03;
    float percentage = (total / 3.0);
    if (mark_01 < 33 || mark_02 < 33 || mark_03 < 33)
    {
        printf("You are fail due to less marks in individual subject \n");
    }
    else if (percentage < 40)
    {
        printf("You are fail due to less percentage\n");
    }
    else
    {
        printf("You are passed\n");
    }

    return 0;
}