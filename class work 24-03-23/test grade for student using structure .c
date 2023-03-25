#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char grade;
};

int main() {
    int no_of_students, count_a=0, count_b=0, count_c=0, count_d=0, count_f=0, i;
    struct student s;

    printf("Enter No. of Students: ");
    scanf("%d", &no_of_students);

    for (i=1; i<=no_of_students; i++) {
        printf("\nEnter student %d Number, Grade : ", i);
        scanf("%d %c", &s.number, &s.grade);

        switch(s.grade) {
            case 'A':
                count_a++;
                break;
            case 'B':
                count_b++;
                break;
            case 'C':
                count_c++;
                break;
            case 'D':
                count_d++;
                break;
            case 'F':
                count_f++;
                break;
        }

        printf("\nStudent %d details:\n", i);
        printf("Number: %d\n", s.number);
        printf("Grade: %c\n", s.grade);
        printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", count_a, count_b, count_c, count_d, count_f);
    }

    return 0;
}
