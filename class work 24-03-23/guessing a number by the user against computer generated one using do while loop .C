#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // seeding random number generator
    number = rand() % 100 + 1; // generating random number between 1 and 100
    printf("Guess a number between 1 and 100\n");
    do {
        scanf("%d", &guess);
        attempts++; // incrementing number of attempts
        if (guess > number) {
            printf("Too high!\n");
        }
        else if (guess < number) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations, you guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != number);
    return 0;
}
