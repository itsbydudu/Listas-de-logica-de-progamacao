#include <stdio.h>

int main(){

    float a, b;
    float soma, sub, mult, div;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b; 

    printf("Para os numeros %.1f e %.1f, segue a soma = %.1f, substracao = %.1f, multiplicacao = %.1f e divisao = %.1f", a, b, soma, sub, mult, div);

}
