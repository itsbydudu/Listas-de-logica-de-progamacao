#include <stdio.h>

int main(){

    float n1, n2;
    float res;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);

    res = (n1 + n2) / 2;

    if(res >= 7){
        printf("Aprovado!");
    }else if(res >= 5 && res <= 7){
        printf("Recuperacao!");
    }else if(res < 5){
        printf("Reprovado!");
    }


}