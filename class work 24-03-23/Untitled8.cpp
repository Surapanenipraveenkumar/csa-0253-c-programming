#include <stdio.h>

struct Date { 
  int day, month, year;
};

struct Employee {
  int emp_no;
  char emp_name[50];
  float emp_salary;
  struct Date emp_doj;
};

int main() {
  struct Employee emp;

  printf("Enter Employee Number: ");
  scanf("%d", &emp.emp_no);

  printf("Enter Employee Name: ");
  scanf("%s", emp.emp_name);

  printf("Enter Employee Salary: ");
  scanf("%f", &emp.emp_salary);

  printf("Enter Joining Date (dd-mm-yyyy): ");
  scanf("%d-%d-%d", &emp.emp_doj.day, &emp.emp_doj.month, &emp.emp_doj.year);

  printf("\nEmployee Details\n");
  printf("Employee Number: %d\n", emp.emp_no);
  printf("Employee Name: %s\n", emp.emp_name);
  printf("Employee Salary: %.2f\n", emp.emp_salary);
  printf("Joining Date: %d-%d-%d\n", emp.emp_doj.day, emp.emp_doj.month, emp.emp_doj.year);

  return 0;
}
