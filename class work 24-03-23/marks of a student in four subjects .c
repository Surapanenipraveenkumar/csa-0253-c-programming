#include <stdio.h>

int main() {
    float python_marks, c_prog_marks, math_marks, physics_marks, total_marks, aggregate_marks;
    printf("Enter the marks in python: ");
    scanf("%f", &python_marks);
    printf("Enter the marks in c programming: ");
    scanf("%f", &c_prog_marks);
    printf("Enter the marks in Mathematics: ");
    scanf("%f", &math_marks);
    printf("Enter the marks in Physics: ");
    scanf("%f", &physics_marks);

    total_marks = python_marks + c_prog_marks + math_marks + physics_marks;
    aggregate_marks = total_marks / 4;

    if (aggregate_marks > 75) {
        printf("DISTINCTION");
    } else if (60 <= aggregate_marks && aggregate_marks < 75) {
        printf("First Division");
    } else if (50 <= aggregate_marks && aggregate_marks < 60) {
        printf("Second Division");
    } else if (40 <= aggregate_marks && aggregate_marks < 50) {
        printf("Third Division");
    } else {
        printf("Fail");
    }

    printf("\nTotal= %.1f\n", total_marks);
    printf("Aggregate= %.1f\n", aggregate_marks);

    return 0;
}
