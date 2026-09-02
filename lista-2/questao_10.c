#include <stdio.h>
#include <math.h>

int main (){
    // IMC // 

    float altura, peso, imc;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (pow(altura, 2));
    
    if (imc < 18.5){
        printf("sendo seu peso %.2f e sua altura %.2f, o seu imc e de %.2f q estar menor que 18.5, logo sua condicao e: abaixo do peso", peso, altura, imc);
    } else if (imc >= 18.5 && imc <=25){
        printf("sendo seu peso %.2f e sua altura %.2f, o seu imc e de %.2f q estar entre que 18.5 e 25, logo sua condicao e: peso normal", peso, altura, imc);
    } else if (imc >=25 && imc <=30){
        printf("sendo seu peso %.2f e sua altura %.2f, o seu imc e de %.2f q estar entre que 25 e 30, logo sua condicao e: acima do peso", peso, altura, imc);
    } else if (imc > 30){
        printf("sendo seu peso %.2f e sua altura %.2f, o seu imc e de %.2f q estar maior que 30, logo sua condicao e: obeso", peso, altura, imc);
    }
    return 0;

}