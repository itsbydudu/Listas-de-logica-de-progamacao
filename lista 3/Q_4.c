#include <stdio.h>

int main(){

    float n1, n2, n3;
    float media;

    printf("Digite a nota N1: ");
    scanf("%f", &n1);
    printf("Digite a nota N2: ");
    scanf("%f", &n2);
    printf("Digite a nota N3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("A media das notas %.1f, %.1f, %.1f, e de %.2f", n1, n2, n3, media);
}