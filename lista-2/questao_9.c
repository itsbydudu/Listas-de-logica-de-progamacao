#include <stdio.h>
#include <string.h>

int main (){

// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu
// peso ideal utilizando as seguintes fórmulas:
// • Para homens:
// peso ideal = (72,7 × altura) - 58
// • Para mulheres:
// peso ideal = (62,1 × altura) - 44,7

    float altura, peso_ideal_m, peso_ideal_f;
    char sexo[10];

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Qual seu sexo? (masculino/feminino): ");
    scanf("%s", sexo);

    if(strcmp(sexo, "masculino") == 0){
        peso_ideal_m = (72.7 * altura) - 58;
        printf("O seu peso ideal e de: %.2f", peso_ideal_m);
    } else if (strcmp(sexo, "feminino") == 0){
        peso_ideal_f = (62.1 * altura) - 44.7;
        printf("O seu peso ideal e de: %.2f", peso_ideal_f);
}
}