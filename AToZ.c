#include <stdio.h>

int main() {

    //The first loop is using ASCII
    printf("Alphabets from (A-Z) are:\n");

    for(int i = 65; i <= 90; i++) {
        printf("%c ", i);
    }

    printf("\nAlphabets from (a-z) are:\n");

    for(int i = 'a'; i <= 'z'; i++) {
        printf("%c ", i);
    }

}