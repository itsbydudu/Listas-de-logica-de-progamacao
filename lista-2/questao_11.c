#include <stdio.h>

int main (){
    float numero, porcento_10,porcento_15, parcela, parcela_acresimo, valor_produto;
    // Elabore um algoritmo que calcule o valor a ser pago por um produto,
    // considerando o preço normal da etiqueta e a condição de pagamento escolhida.

    printf("Qual codigo do produto (1/2/3/4): ");
    scanf("%f", &numero);
    printf("Quanto vc pagara no seu produto: ");
    scanf("%f", &valor_produto);

    if (numero == 1){
        porcento_10 = valor_produto - (valor_produto * 0.1);
        printf("O valor do seu produto sera de %.2f com 10 porcento de desconto!", porcento_10);
    } else if (numero == 2){
        porcento_15 = valor_produto - (valor_produto * 0.15);
        printf("O valor do seu produto sera de %.2f com 15 porcento de desconto!", porcento_15);
    } else if (numero == 3){
        parcela = valor_produto / 2;
        printf("O valor de 1 parcela sera de %.2f, e voce pagara em duas parcelas sem juros!", parcela);
    } else if(numero == 4){
        parcela_acresimo = (valor_produto + (valor_produto * 0.1)) / 2;
        printf("a parcela com o acresimo de 10 porcento a ser paga sera de %.2f, e voce pagara en duas parcelas!", parcela_acresimo);
    }
        return 0;
}