#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll_no;
    char name[50];
    struct Date dob;
    int marks[5];
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Date Of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("Enter Marks in 5 Subjects:\n");
	for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
		 }

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Date Of Birth: %d-%d-%d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Marks in 5 Subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i+1, s.marks[i]);
    }

    return 0;
}
