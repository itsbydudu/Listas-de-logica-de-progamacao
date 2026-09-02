#include <stdio.h>

int main (){
    // Escreva um algoritmo que leia três valores inteiros
    // diferentes entre si e apresente-os em ordem decrescente.

    int a, b, c;
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);
        printf("Digite o valor de C: ");
        scanf("%d", &c);

            if (a > b && b > c) {
                printf("Ordem decrescente: %d, %d, %d\n", a, b, c);
    }
            else if (a > c && c > b) {
                printf("Ordem decrescente: %d, %d, %d\n", a, c, b);
    }
            else if (b > a && a > c) {
                printf("Ordem decrescente: %d, %d, %d\n", b, a, c);
    }
            else if (b > c && c > a) {
                printf("Ordem decrescente: %d, %d, %d\n", b, c, a);
    }
            else if (c > a && a > b) {
                printf("Ordem decrescente: %d, %d, %d\n", c, a, b);
    }
            else if (c > b && b > a) {
                printf("Ordem decrescente: %d, %d, %d\n", c, b, a);
    }
            return 0;

}