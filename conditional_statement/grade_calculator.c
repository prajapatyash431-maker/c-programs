#include <stdio.h>

int main()
{
    // Program to calculate grade, According to Mark.
    int mark;
    printf("Enter mark (0-100 ) : ");
    scanf("%d", &mark);

    // Input validation
    if (mark < 0 || mark > 100)
    {
        printf("Invalid mark!, Enter mark between (0-100)");
        return 0;
    }
    char grade;
    // Grade calculation
    if (mark >= 90)
        grade = 'A';

    else if (mark >= 80)
        grade = 'B';

    else if (mark >= 70)
        grade = 'C';

    else if (mark >= 60)
        grade = 'D';

    else if (mark >= 50)
        grade = 'E';

    else
        grade = 'F';

    printf("Your grade is : %c \n", grade);

    return 0;
}