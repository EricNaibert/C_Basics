#include <stdio.h>

int main() {

    int x;
    int y;

    printf("Soma de dois numeros!\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    int resultado = x + y;

    printf("O resultado da soma: %d", resultado);

}