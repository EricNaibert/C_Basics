#include <stdio.h>

int main() {

    printf("|||||||||||||||||||||||||||||||||||\n");
    printf("|| Welcome to the Guessing Game! ||\n");
    printf("|||||||||||||||||||||||||||||||||||\n");

    int secretNumber = 42;
    int guess;

    printf("What's your guess?:\n");
    scanf("%d", &guess);

    //printf("Your guess is %d. And the secret number is %d. \n", chute, secretNumber);
    printf("Your guess was %d.\n", guess);
    
    return 0;

}