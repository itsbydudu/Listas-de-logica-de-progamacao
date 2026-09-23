#include <stdio.h>

int main(){
    
    float horas_trabalhadas, valor_recebido_hora, salario_bruto;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor recebido na hora: ");
    scanf("%f", &valor_recebido_hora);

    salario_bruto = horas_trabalhadas * valor_recebido_hora;

    printf("O seu salario bruto e de %.2f", salario_bruto);
  
}