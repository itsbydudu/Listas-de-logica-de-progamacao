#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0 ) {
        printf("O numero e par!");
    } else {
        printf("O numero e impar!");
    }
}