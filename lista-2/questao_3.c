#include <stdio.h>

int main (){

    int numero;
    //Faça um algoritmo que receba um número inteiro qualquer e informe se ele é par ou ímpar. //
    printf("Digite um Numero: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("o numero %d, e par!", numero);
    } else {
        printf("o numero %d e impar!", numero);
    }
    return 0;
} 
 