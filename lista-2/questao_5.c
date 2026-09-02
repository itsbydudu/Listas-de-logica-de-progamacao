#include <stdio.h>

int main(){
    //Faça um algoritmo que leia um número. 
    // • Caso ele seja positivo, calcule o seu dobro.
    // • Caso ele seja negativo, calcule o seu triplo.
    //   Ao final, apresente o resultado

    float numero, dobro, triplo;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0){
        dobro = numero * 2;
        printf("O dobro do numero %.1f e de: %.2f", numero, dobro);
    } else if (numero < 0){
        triplo = numero * 3;
        printf("O triplo do numero %.1f e de: %.2f", numero, triplo);
    }
    return 0;
}