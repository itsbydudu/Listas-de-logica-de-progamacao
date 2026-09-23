#include <stdio.h>

int main(){

    int idade;

    printf("Quantos anos voce tem: ");
    scanf("%d", &idade);

    if(idade >= 0 && idade <= 12)
    {
        printf("Voce e uma crianca!");
    }

    // ----------------------------------- //
    else if(idade >= 13 && idade <=17)
    {
        printf("Voce e um adolecente!");
    }

    // ----------------------------------- //
    else if(idade >= 18 && idade <= 59)
    {
        printf("Voce e um adulto!");
    }

    // ----------------------------------- //
     else if(idade >= 60)
    {
        printf("Voce e um idoso!");
    }
}