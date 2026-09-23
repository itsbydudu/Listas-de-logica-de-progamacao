#include <stdio.h>

int main(){
    
    int distancia_percorrida, quantidade_combustivel;
    int res;

    printf("Distancia percorrida em km: ");
    scanf("%d", &distancia_percorrida);
    printf("Quantidade de combustivel gasto em L: ");
    scanf("%d", &quantidade_combustivel);

    res = distancia_percorrida * quantidade_combustivel;

    printf("O consumo medio em Km/L e de: %d", res);
}