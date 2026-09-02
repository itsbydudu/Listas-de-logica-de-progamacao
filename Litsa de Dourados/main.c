#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c, d, e, f;
    float resultado, resultado1, resultado2, resultado3, resultado4, resultado5;
    char opcao;

    // pra questao 6 //

    double x, y, z, h;
    double resultado6;
// ---------------------- // 

// essa parte é para selecionar qual das operações resolver //
// se for usar Switch a "case" é o como se fosse as questões //
// lembra de colocar o { } no Switch esse vai ser a area de atuação dele //
    printf("Qual questao deseja resolver (a/b/c/d/e/f/g/h): ");
    scanf(" %c", &opcao);

switch (opcao) {

    case 'a':
        printf("Vamos calcular a / b + 1\n");
        printf("Para calcular ensira os valores de a e b:");
        scanf("%d", &a);
        scanf("%d", &b);

        resultado = (float)a / b + 1;
        printf("Estamos calculando: %d / %d + 1\n", a, b);
        printf("O resultado da operacao e: %f\n\n", resultado); 
        break;
        
    case 'b':    
        printf("Vamos calcular agora: a + b / a - b\n");
        printf("Digite os valores de a e b: ");
        scanf("%d", &a);
        scanf("%d", &b);

        resultado2 = (float)(a + b) / (float)(a - b);
        printf("estamos calculando: %d + %d / %d - %d", a, b, a, b);
        printf("o resultado da operacao e: %f\n\n", resultado2);
        break;

    case 'c':    
        printf("Vamos calcular: a + b/c / d - e/f\n");
        printf("Digite os valores de a, b, c, d, e, f separados por espaco: ");
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        
        resultado3 = ((float)a + ((float)b / c)) / ((float)d - ((float)e / f));
        printf("O resultado da operacao e: %f\n\n", resultado3);
        break;

    case 'd':    
        printf("Vamos calcular: a + (b / c - d)\n");
        printf("Digite os valores de a, b, c, d separados por espaço: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        resultado4 = a + ((float)b / (c - d));
        printf("O resultado da operacao e: %f", resultado4);
        break;

    case 'e':
        printf("Vamos calcular: (a + b) c / d ");
        printf("Digite os valores de a, b, c, d separados por espaco: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        resultado5 = ((a + b) * ((float)c / d));
        printf("O resultado da operacao e: %f", resultado5);
        break;

    case 'f':
        printf("Vamos calcular: [(a + b)^c]^d\n");
        printf("Digite os valores de a, b, c, d separados por espaco: ");
        scanf("%lf %lf %lf %lf", &x, &y, &z, &h);

        resultado6 = pow(pow(x + y, z), h);
        printf("O resultado da operacao e: %lf", resultado6);

    default: 
        printf("opcao invalida");
        break;
            return 0;
// --------------------------------------------------------------------------------- //
   // essas "}" aq embaixo é aonde acaba o switch, acima dessas "---" tudo esta no switch //
    }
}