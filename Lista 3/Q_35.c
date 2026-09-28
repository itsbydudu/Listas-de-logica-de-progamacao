#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtd, i;
    char nome[50];
    float n1, n2, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("\nAluno %d\n", i);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Nota da primeira avaliação: ");
        scanf("%f", &n1);
        printf("Nota da segunda avaliação: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;

        printf("%s - Média: %.2f - ", nome, media);

        if (media >= 7) {
            printf("Aprovado\n");
        } else if (media >= 5) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
