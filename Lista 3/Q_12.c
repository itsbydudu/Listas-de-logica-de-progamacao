#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0 ){
        printf("O numero e positivo!");
    } else if(numero < 0 ){
        printf("O numero e negativo");
    } else if(numero == 0 ){
        printf("0 nesse codigo e considerado neutro!");
    }
}