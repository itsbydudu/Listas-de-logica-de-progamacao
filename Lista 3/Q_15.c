#include <stdio.h>

int main(){
    
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3 ){
        printf("O numero %d e maior!", n1);
    } else if(n2 > n1 && n2 > n3){
        printf("O numero %d e maior!", n2);
    } else if(n3 > n1 && n3 > n2){
        printf("O numero %d e maior!", n3);
    } else {
        printf("Houve um empate entre os numeros!");
    }
}