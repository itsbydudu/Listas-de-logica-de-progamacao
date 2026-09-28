#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int entrada, saida, horas;
    float total;

    printf("Hora de entrada: ");
    scanf("%d", &entrada);
    printf("Hora de saída: ");
    scanf("%d", &saida);

    if (saida < entrada) {
        saida = saida + 24;
    }

    horas = saida - entrada;

    if (horas <= 1) {
        total = 10;
    } else {
        total = 10 + (horas - 1) * 5;
    }

    printf("Tempo de permanência: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
