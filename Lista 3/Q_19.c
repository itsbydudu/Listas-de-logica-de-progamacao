#include <stdio.h>

int main(){

//     Classifique o resultado:
// • abaixo de 18,5 → Abaixo do peso
// • 18,5 a 24,9 → Peso adequado
// • 25,0 a 29,9 → Sobrepeso
// • 30,0 ou mais → Obesidade

    float peso, altura;
    float imc;

    printf("Qual o seu peso?: ");
    scanf("%f", &peso);
    printf("Qual o sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("o seu imc e de %.2f\n", imc);

    if (imc < 18.5)
    {
        printf("Voce esta abaixo do peso! ");
    }

    // --------------------------------------- //
    else if(imc >= 18.5 && imc <= 24.9)
    {
         printf("Voce esta com o peso adequado!");
    }

    // --------------------------------------- //
    else if(imc >= 25 && imc <= 29.9)
    {
         printf("Voce esta com sobrepeso!");
    }

    // --------------------------------------- //
    else if(imc >= 30)
    {
         printf("Voce esta com obesidade!");
    }


}   

