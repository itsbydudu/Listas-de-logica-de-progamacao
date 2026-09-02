#include <stdio.h>
#include <string.h>

int main (){
    int anos_de_casado;
    char sexo[10], estado_civil[15], nome[20];
        //Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso o sexo seja F //
        // e o estado civil seja CASADA, solicite também o tempo de casamento, em anos //
        printf("Digite seu nome: ");
        scanf("%s", nome);
        printf("Estado civil (solteiro/casado/viuvo): ");
        scanf("%s", estado_civil);
        printf("Qual seu Sexo (masculino/feminino):  ");
        scanf("%s", sexo);

        if (strcmp(sexo, "feminino") == 0 && strcmp(estado_civil, "casado") == 0)
        {
            printf("Quantos anos de casado?: ");
            scanf("%d", &anos_de_casado);
        } 
        return 0;

}
