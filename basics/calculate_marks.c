#include <stdio.h>

int main()
{   
    // Program to calculate total marks and percentage by taking each subject marks by user.
    
    int subject_1, subject_2, subject_3, subject_4, subject_5;
    int total;
    float percentage;
    printf("Enter Number of subject_1 : ");
    scanf("%d", &subject_1);
    printf("Enter Number of subject_2 : ");
    scanf("%d", &subject_2);
    printf("Enter Number of subject_3 : ");
    scanf("%d", &subject_3);
    printf("Enter Number of subject_4 : ");
    scanf("%d", &subject_4);
    printf("Enter Number of subject_5 : ");
    scanf("%d", &subject_5);

    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage is %.1f", percentage);

    return 0;
}