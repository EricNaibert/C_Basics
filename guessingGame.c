#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int seconds = time(0);
    srand(seconds);

    int secretNumber = rand() % 100;
    int guess;
    int tries = 1;
    double points = 1000;

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
            printf("\nYour total score was: %.1f.\n", points);
            break;

        } else if(guess < secretNumber) {
            printf("\nYour guess was wrong! The secret number is higher!\n");

        } else {
            printf("\nYour guess was wrong! The secret number is lower!\n");    
        }

        double lostPoints = abs(guess - secretNumber) / (double)2;
        points = points - lostPoints;

        tries++;
    }

}