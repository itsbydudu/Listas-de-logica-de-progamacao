#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtd, i;
    float nota, soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / qtd;
    printf("Média da turma: %.2f\n", media);

    return 0;
}
