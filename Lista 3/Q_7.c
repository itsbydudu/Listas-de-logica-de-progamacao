#include <stdio.h>

int main(){

    int celcius;
    float graus;

    printf("Digite o graus em celcius: ");
    scanf("%d", &celcius);

    graus = ((celcius * 9) / 5) + 32;
    printf("o valor em farrenhigh e de: %.2f", graus);

}