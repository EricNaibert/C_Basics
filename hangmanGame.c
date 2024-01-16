#include <stdio.h>
#include <string.h>

int main() {

    printf("HANGMAN\n");
    
    char secretWord[20];
    sprintf(secretWord, "MELANCIA");

    int win = 0;
    int hang = 0;

    do {
        char guess;
        scanf("%c", &guess);

        for(int i = 0; i < strlen(secretWord); i++) {
            if(secretWord[i] == guess) {
                printf("Your guess is right! %c is on %d\n", secretWord[i], i);
            }
        }

    } while (!win && !hang);
    

}