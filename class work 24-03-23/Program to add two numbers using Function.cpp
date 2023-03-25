#include<stdio.h>

void add_numbers() {
 int num1, num2, sum;
 printf("Enter two numbers: ");
 scanf("%d%d", &num1, &num2);
 sum = num1 + num2;
 printf("Sum: %d", sum);
}

int main() {
 add_numbers();
 return 0;
}
