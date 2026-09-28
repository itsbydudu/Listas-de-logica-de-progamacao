#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char produto[50];
    int quantidade, continuar, qtdVendas = 0, totalProdutos = 0;
    float preco, totalVenda, faturamento = 0, maiorVenda = 0;

    do {
        printf("\nNome do produto: ");
        scanf("%s", produto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preço unitário: ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        qtdVendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("Registrar outra venda? (1 = sim, 0 = não): ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("\nQuantidade de vendas: %d\n", qtdVendas);
    printf("Total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", maiorVenda);

    return 0;
}
