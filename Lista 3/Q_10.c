#include <stdio.h>

int main(){
    
    int quantidade_comprada, preco_uni, res;
    char nome_produto [50]; 

    printf("Nome do produto: ");
    scanf("%s", nome_produto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade_comprada);
    printf("Preco unitario: ");
    scanf("%d", &preco_uni);

    res = quantidade_comprada * preco_uni;
    printf("Voce comprou o produto: %s, %d unidades e cada custando %d reais e tudo ficou %d.", nome_produto, quantidade_comprada, preco_uni, res);

}