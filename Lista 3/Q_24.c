#include <stdio.h>

int main(){
    
    int escolha;

    printf("Qual tabuada deseja ver?: ");
    scanf("%d", &escolha);

    for(int numero = 1; numero <=10; numero ++)
    {
        int res;

        res = escolha * numero;
        printf("%d x %d = %d\n", escolha, numero, res);
    }
}