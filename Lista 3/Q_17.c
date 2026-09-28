#include <stdio.h>

int main(){

    float valor_compra;

    printf("Valor da compra: ");
    scanf("%f", &valor_compra);

    if(valor_compra <= 100)
    {
        printf("O valor total da conta sem desconto e de: %.2f", valor_compra);
    } 

    else if(valor_compra >= 100.01 && valor_compra <= 500)
    {
        float desconto;
        desconto = valor_compra - (valor_compra * 0.05);
        printf("O valor total da compra com 5 porcento de desconto foi de %.2f", desconto);
    }

    else if(valor_compra > 500)
    {
        float desconto;
        desconto = valor_compra - (valor_compra * 0.1);
        printf("O valor total da compra com 10 porcento de desconto foi de %.2f", desconto);
    }
}