// C Program to Find Grade of a Student Using If else Ladder
#include <stdio.h>

int main() {
    float subject_1, subject_2, subject_3, subject_4;
    float total, average, percentage;
    char grade;

    printf("Enter the marks of four subjects::\n");
    scanf("%f%f%f%f", &subject_1, &subject_2, &subject_3, &subject_4);

    // It will calculate the Total, Average and Percentage
    total = subject_1 + subject_2 + subject_3 + subject_4;
    average = total / 4.0;
    percentage = (total / 400.0) * 100;

    // It will calculate the Grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80 && average < 90)
        grade = 'B';
    else if (average >= 70 && average < 80)
        grade = 'C';
    else if (average >= 60 && average < 70)
        grade = 'D';

    // It will produce the final output
    printf("\nThe Total marks is:  \t%.2f / 400.00\n", total);
    printf("\nThe Average marks is:\t%.2f\n", average);
    printf("\nThe Percentage is:   \t%.2f%%\n", percentage);
    printf("\nThe Grade is:        \t'%c'\n", grade);
    return 0;
}
