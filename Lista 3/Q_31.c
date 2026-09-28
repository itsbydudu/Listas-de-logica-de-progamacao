#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float litros, preco, bruto, desconto, final;

    printf("Litros abastecidos: ");
    scanf("%f", &litros);
    printf("Preço do litro: ");
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        desconto = 0;
    } else if (litros <= 40) {
        desconto = bruto * 0.03;
    } else {
        desconto = bruto * 0.05;
    }

    final = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final);

    return 0;
}
