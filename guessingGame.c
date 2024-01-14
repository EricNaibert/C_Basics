#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int seconds = time(0);
    srand(seconds);

    int secretNumber = rand() % 100;
    int guess;
    double points = 1000;

    printf("\n __      _____ _    ___ ___  __  __ ___   _____ ___    _____ _  _ ___  ");
    printf("\n \\ \\    / | __| |  / __/ _ \\|  \\/  | __| |_   _/ _ \\  |_   _| || | __| ");
    printf("\n  \\ \\/\\/ /| _|| |_| (_| (_) | |\\/| | _|    | || (_) |   | | | __ | _|  ");
    printf("\n   \\_/\\_/ |___|____\\___\\___/|_|  |_|___|   |_| \\___/    |_| |_||_|___| ");
    printf("\n     ___ _   _ ___ ___ ___ ___ _  _  ___    ___   _   __  __ ___ _     ");
    printf("\n    / __| | | | __/ __/ __|_ _| \\| |/ __|  / __| /_\\ |  \\/  | __| |    ");
    printf("\n   | (_ | |_| | _|\\__ \\__ \\| || .` | (_ | | (_ |/ _ \\| |\\/| | _||_|    ");
    printf("\n    \\___|\\___/|___|___|___|___|_|\\_|\\___|  \\___/_/ \\_|_|  |_|___(_)    \n");

    printf("\nChoose the difficult level!\n");
    printf("(1) Easy | (2) Normal | (3) Hard\n");
    printf("Enter the level of difficulty: ");

    int difficulty;
    scanf("%d", &difficulty);

    int tries;
    int chosen = 0;
    while(!chosen) {

        switch (difficulty) {
            case 1: 
                tries = 20;
                chosen = 1;
                break;
            case 2: 
                tries = 12;
                chosen = 1;
                break;
            case 3:
                tries = 6;
                chosen = 1;
                break;
            default:
                printf("Please, select the difficulty level:");
                scanf("%d", &difficulty);
        }
    }

    int win = 0;
    int currentTry = 0;

    for (int i = 0; i < tries; i ++) {

        printf("\nWhat's your guess? ");
        scanf("%d", &guess);

        if(guess < 0) {
            printf("You can't enter negative numbers!");
            continue;
        }
        
        if(guess == secretNumber) {
            win = 1;
            break;

        } else if(guess < secretNumber) {
            printf("\nYour guess was wrong! The secret number is higher!\n");

        } else {
            printf("\nYour guess was wrong! The secret number is lower!\n");    
        }

        double lostPoints = abs(guess - secretNumber) / (double)2;
        points = points - lostPoints;

        currentTry++;
    }

    if(win) {
        printf("\n   ___ ___  _  _  ___ ___    _ _____ _   _ _      _ _____ ___ ___  _  _ ___ ");
        printf("\n  / __/ _ \\| \\| |/ __| _ \\  /_\\_   _| | | | |    /_\\_   _|_ _/ _ \\| \\| / __|");
        printf("\n | (_| (_) | .` | (_ |   / / _ \\| | | |_| | |__ / _ \\| |  | | (_) | .` \\__ \\");
        printf("\n  \\___\\___/|_|\\_|\\___|_|_\\/_/ \\_\\_|  \\___/|____/_/ \\_\\_| |___\\___/|_|\\_|___/");
        printf("\nYou guessed the secret number %d!\n", secretNumber);
        printf("Your number of tries was: %d!", currentTry);
        printf("\nYour total score was: %.1f!\n", points);

    } else {
        printf("\n   ___   _   __  __ ___    _____   _____ ___ ");
        printf("\n  / __| /_\\ |  \\/  | __|  / _ \\ \\ / / __| _ \\");
        printf("\n | (_ |/ _ \\| |\\/| | _|  | (_) \\ V /| _||   /");
        printf("\n  \\___/_/ \\_\\_|  |_|___|  \\___/ \\_/ |___|_|_\\");
        printf("\nYou couldn't guess the secret number!\n");
        printf("Your number of tries was: %d!", currentTry);
        printf("\nYour total score was: 0");
    }
}