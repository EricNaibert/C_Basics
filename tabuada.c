#include <stdio.h>

int main() {

    printf("Multiplication Table\n");

    int input;
    scanf("%d", &input);

    printf("Table of %d!\n", input);

    for(int i = 1; i <= 10; i++) {
        int result = input * i;
        printf("%d * %d = %d\n", input, i, result);
    }

}