#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float saldo, valor;

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    do {
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Valor do depósito: ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Depósito realizado.\n");
                } else {
                    printf("Valor inválido.\n");
                }
                break;
            case 3:
                printf("Valor do saque: ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor inválido.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente.\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado.\n");
                }
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 4);

    return 0;
}
