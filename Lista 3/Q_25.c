#include <stdio.h>

int main(){
    
    int numero;
    int soma = 0;

    printf("Qual numero fatorial deseja escolher: ");
    scanf("%d", &numero);

    for(int numero2 = 1; numero2 <= numero; numero2 ++)
    {
        soma += numero2;
    }

    printf("Soma de 1 ate %d = %d\n", numero, soma);
    return 0;
}