#include <stdio.h>

int main() {

    int secretNumber = 42;
    int guess;
    int tries = 1;

    printf("|||||||||||||||||||||||||||||||||||\n");
    printf("|| Welcome to the Guessing Game! ||\n");
    printf("|||||||||||||||||||||||||||||||||||\n");

    while(1) {

        printf("\nWhat's your guess? ");
        scanf("%d", &guess);

        if(guess < 0) {
            printf("You can't enter negative numbers!");
            continue;
        }
        
        if(guess == secretNumber) {
            printf("\nCongratulations! Your guessed the secret number %d!\n", secretNumber);
            printf("\nYour number of tries was: %d!", tries);
            break;

        } else if(guess < secretNumber) {
            printf("\nYour guess was wrong! The secret number is higher!\n");

        } else {
            printf("\nYour guess was wrong! The secret number is lower!\n");      
        }

        tries++;
    }

}