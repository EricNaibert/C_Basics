#include <stdio.h>

int main() {

    int number = 0;

    for(int i = 1; i <= 100; i++) {
        number = number + i;
    }

    printf("%d \n", number);

}   