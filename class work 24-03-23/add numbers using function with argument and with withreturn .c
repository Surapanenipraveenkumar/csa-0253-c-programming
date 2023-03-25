#include<stdio.h>

int add_numbers(int num1, int num2) {
 int sum;
 sum = num1 + num2;
 return sum;
}

int main() {
 int num1, num2, sum;
 printf("Enter two numbers: ");
 scanf("%d%d", &num1, &num2);
 sum = add_numbers(num1, num2);
 printf("Sum: %d", sum);
 return 0;
}
