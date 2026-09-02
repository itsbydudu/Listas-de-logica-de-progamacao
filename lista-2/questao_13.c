#include <stdio.h>

int main() {

   
    int limite_via, velocidade_registrada;
    float percentual_excedido;

    
    printf("Velocidade maxima da via (km/h): ");
    scanf("%d", &limite_via);

    printf("Velocidade registrada do veiculo (km/h): ");
    scanf("%d", &velocidade_registrada);

    printf("\n--- RESULTADO ---\n");
    printf("Limite da via: %d km/h\n", limite_via);
    printf("Velocidade registrada: %d km/h\n", velocidade_registrada);

    if (velocidade_registrada <= limite_via) {

        printf("Situacao: Nao houve infracao.\n");

    } else {
        percentual_excedido = ((velocidade_registrada - limite_via) / (float) limite_via) * 100;
        printf("Percentual excedido: %.2f%%\n", percentual_excedido);

        if (percentual_excedido <= 20) {
            printf("Classificacao: Infracao MEDIA.\n");
        } 
        else if (percentual_excedido <= 50) {
            printf("Classificacao: Infracao GRAVE.\n");
        } 
        else {
            printf("Classificacao: Infracao GRAVISSIMA.\n");
        }

        if (velocidade_registrada > 120) {
            printf("ALERTA: Velocidade extremamente elevada!\n");
        }
    }

    return 0;
}