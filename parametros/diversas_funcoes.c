#include <stdio.h>

float calculaImc(float peso, float altura){

    float resultado_imc = peso / (altura * altura);
    return resultado_imc;

}

void situacao(float resultado_imc){
    if (resultado_imc <= 18.5) {
        printf("\nTa abaixo do peso!");
    } else if (resultado_imc > 18.5 && resultado_imc <= 25){
        printf("\ndentro do peso normal");
    } else {
        printf("\nta acima do peso!");
    }
} 

int main() {

    float resultado_imc;
    float  peso, altura;

    printf("\nCalcular IM!\n");
    printf("Qual peso: ");
    scanf("%f", &peso);
    printf("Altura: "); 
    scanf("%f", &altura);

    resultado_imc = calculaImc(peso, altura);
    printf("seu IMC e de %.2f", resultado_imc);

    situacao(resultado_imc);

    return 0;
}
