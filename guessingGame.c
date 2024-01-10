#include <stdio.h>

int main() {

    printf("|||||||||||||||||||||||||||||||||||\n");
    printf("|| Welcome to the Guessing Game! ||\n");
    printf("|||||||||||||||||||||||||||||||||||\n");

    int secretNumber = 42;
    int chute;

    printf("Whats your guess?\n");
    scanf("%d", &chute);

    //printf("Your guess is %d. And the secret number is %d. \n", chute, secretNumber);
    printf("Your guess is %d.\n", chute);
    
    return 0;

}