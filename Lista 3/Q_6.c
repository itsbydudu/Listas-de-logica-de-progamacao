#include <stdio.h>


int main(){

    int raio;
    float area;

    printf("Qual e a area do raio: ");
    scanf("%d", &raio);

    area = 3.14159 * ( raio * raio);
    printf("a area do ciruclo e de %.2f", area);

}