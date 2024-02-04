#include <stdio.h>
#include <string.h>

int main() {

    printf("HANGMAN\n");
    
    char secretWord[20];
    sprintf(secretWord, "MELANCIA");

    int win = 0;
    int hang = 0;

    char letters[26];
    char tries = 0;

    do {

        for(int i = 0; i < strlen(secretWord); i++) {

            int found = 0;

            for(int j = 0; j < tries; j++) {
                if(letters[j] == secretWord[i]) {
                    found = 1;
                    break;
                }
            }

            if(found) {
                printf("%c ", secretWord[i]);
            } else {
                printf("_ ");
            }
        }

        printf("\n");
        char guess;
        scanf(" %c", &guess);

        letters[tries] = guess;
        tries++;    

        

    } while (!win && !hang);
    

}