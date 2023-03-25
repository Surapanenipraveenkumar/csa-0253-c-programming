#include<stdio.h>

// function declaration
int power(int base, int exponent);

// main function
int main(){
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}

// function definition
int power(int base, int exponent){
    int result = 1;
    while(exponent>0){
        result *= base;
        exponent--;
    }
    return result;
}
