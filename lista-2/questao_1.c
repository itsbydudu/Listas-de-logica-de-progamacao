#include <stdio.h>

int main (){
    float a, b, c;
        float soma;
        //Faça um algoritmo que leia três valores inteiros A, B e C //
        // e informe se a soma de A + B é menor que C //
        printf("Digite os valores\n");
        printf("Valor de A: ");
        scanf("%f", &a);
        printf("Valor de B: ");
        scanf("%f", &b);
        printf("Valor de C: ");
        scanf("%f", &c);

        soma = a + b;
        if (soma > c)
        {
            printf("A soma de a + b e de %.1f, logo o valor e menor que o numero c que e %.1f", soma, c);
        }
        else
        {
            printf("A soma de a + b e de %.1f, logo o valor de c que e %.1f e maior que a soma", soma, c);
        }
        return 0;
}