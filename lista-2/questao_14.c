#include <stdio.h>

int main(){

    // pratos de um restaurante
    int opcoes;
    printf("\n---OPCOES---\n");
    printf("1 - Hamburger com fritas\n");
    printf("2 - File de frango grelhado\n");
    printf("3 - Lasanha a bolonhesa\n");
    printf("4 - File de peixe com arroz\n");
    printf("5 - Salada especial\n");
    printf("\n---ESCOLHA UM PRATO---\n");
    printf("Digite o codigo referente ao que quer pedir!: ");
    scanf("%d", &opcoes);
    

    switch (opcoes){
        case 1:
            printf("\n---INFORMACAO DO PRATO---\n");
            printf("O prato que escolher foi o Hamburguer com fritas e ficara R$28,00!");
            break;
            
        case 2:
            printf("\n---INFORMACAO DO PRATO---\n");
            printf("O prato que escolher foi o File de frango grelhado e ficara R$32,00!");
            break;

        case 3: 
            printf("\n---INFORMACAO DO PRATO---\n");
            printf("O prato que escolher foi o Lasanha a bolonhesa e ficara R$35,00!"); 
            break;

        case 4:
            printf("\n---INFORMACAO DO PRATO---\n");
            printf("O prato que escolher foi o File de peixe com arroz e ficara R$42,00!"); 
            break;

        case 5:
            printf("\n---INFORMACAO DO PRATO---\n");
            printf("O prato que escolher foi o File de peixe com arroz e ficara R$25,00!"); 
            break;
    }
    return 0;
}