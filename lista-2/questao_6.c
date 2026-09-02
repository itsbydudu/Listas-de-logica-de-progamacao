#include <stdio.h>

int main (){

    int a, b;
    // Escreva um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são
    // VERDADEIROS ou se ambos são FALSOS
    printf("Digite o primeiro valor logico (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &a);
    printf("Digite o segundo valor logico (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &b);

    if (a == b){
        printf("os dois valore sao iguais (ambos verdadeiros ou falsos)!");
    } else if (a != b){
        printf("Os valores sao diferentes!");
    }

    return 0;
}