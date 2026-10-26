#include<stdio.h>


void maior_numero(int n1, int n2){
    if (n1 < n2) {
        printf("O numero %d e maior", n2);
    } else {
        printf("O numero %d e maior", n1);
    }
    
}
    
int main (){

    int n1, n2;

    printf("Digite o 1 numero: ");
    scanf("%d", &n1);
    printf("Digite o 2 numero: ");
    scanf("%d", &n2);

    maior_numero(n1, n2);
    
return 0;

}