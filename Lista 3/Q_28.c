#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float num, maior;

    for (i = 1; i <= 10; i++) {
        printf("Digite o número %d: ", i);
        scanf("%f", &num);

        if (i == 1 || num > maior) {
            maior = num;
        }
    }

    printf("Maior número: %.2f\n", maior);

    return 0;
}
