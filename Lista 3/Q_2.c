#include <stdio.h>

int main(){
    int a;
    int b;
    float soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    printf("Os numeros %d e %d somados = %.1f", a, b, soma);

}