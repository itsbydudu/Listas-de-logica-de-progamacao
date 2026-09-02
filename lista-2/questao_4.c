#include <stdio.h>

int main (){


    float valor_a, valor_b, soma, multiplicacao;
    //Faça um algoritmo que leia dois valores inteiros, A e B. //
    // • Se os valores forem iguais, some A + B. //
    // • Caso sejam diferentes, multiplique A * B. //
    printf("Digite o valor de A: ");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: ");
    scanf("%f", &valor_b);

    if (valor_a == valor_b) {
        soma = valor_a + valor_b;
        printf("o Valor da somas dos numeros %.1f, %.1f e de: %.2f", valor_a, valor_b, soma);
    } else if (valor_a != valor_b) {
        multiplicacao = valor_a * valor_b;
        printf("o valor da multiplicacao dos numeros %.1f, %.1f e de: %.2f", valor_a, valor_b, multiplicacao);
    }
    return 0;
}

