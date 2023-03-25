#include <stdio.h>

int is_prime(int num) {
    int i;
    for (i=2; i<=num/2; i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count=0, i=2, nth_prime, j=0, prime_numbers[100];

    printf("Enter N: ");
    scanf("%d", &n);

    while (count < n) {
        if (is_prime(i)) {
            count++;
            prime_numbers[j] = i;
            j++;
        }
        i++;
    }

    printf("%dth Prime number is %d\n", n, i-1);

    printf("%d prime numbers after %d are:", n, i-1);
    for (i=0; i<n; i++) {
        printf(" %d", prime_numbers[i+1]);
    }
    printf("\n");

    return 0;
}
