#include <stdio.h>

int main(){

    float base, altura;
    float area;
    int escolha;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Deseja fazer a conta em Metros(1) ou Centimetros(2): ");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("A area do triangulo em metros e de %.1f", area);
    } else if(escolha == 2){
        printf("A area do triangulo em centimetros e de %.1f", area);
    } else {
        printf("Escolha nao valida!");
    }
}