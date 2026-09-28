#include <stdio.h>

int main(){
    
    float n1, n2;
    int operacao;

    printf("Primeiro numero: ");
    scanf("%f", &n1);
    printf("Segundo numero: ");
    scanf("%f", &n2);

    printf("Qual operacao deseja fazer soma(1), substracao(2), multiplicacao(3) ou divisao(4)?: ");
    scanf("%d", &operacao);

    if(operacao == 1)
    {
        float soma;
        soma = n1 + n2;
        printf("A soma dos numeros %.2f e %.2f = %.2f", n1, n2, soma);

    } 
    else if(operacao == 2)
    {
        
        float sub;
        sub = n1 - n2;
        printf("A subtracao dos numeros %.2f e %.2f = %.2f", n1, n2, sub);

    }
    else if(operacao == 3)
    {

        float mult;
        mult = n1 * n2;
        printf("A multiplicacao dos numeros %.2f e %.2f = %.2f", n1, n2, mult);

    }
    else if(operacao == 4)
    {

        float div;
        div = n1 / n2;
        printf("A divisao dos numeros %.2f e %.2f = %.2f", n1, n2, div);

    } 
    else 
    {
        printf("Operacao nao valida!");
    }
}
    