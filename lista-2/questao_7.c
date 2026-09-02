#include <stdio.h>

int main (){

    // Faça um algoritmo que leia um número inteiro.
    // • Caso seja par, some 5 ao seu valor.
    // • Caso seja ímpar, some 8 ao seu valor.
    // Ao final, apresente o resultado da operação.

    int numero, soma_par, soma_impar;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        soma_par = numero + 5;
        printf("O numero %d e par e somado com mais 5 deu %d!", numero, soma_par);
    } else if (numero % 2 == 1){
        soma_impar = numero + 8;
        printf("O numero %d e impar e somado com mais 8 deu %d!", numero, soma_impar);
    }
}