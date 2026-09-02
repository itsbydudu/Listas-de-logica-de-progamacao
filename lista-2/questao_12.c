#include <stdio.h>

int main (){
    // media // 
    int identificacao, nota1, nota2, nota3, me, ma;
        printf("Digite sua matricula (4 digitos): ");
        scanf("%d", &identificacao);
        printf("Digite sua Nota 1 (0 - 100): ");
        scanf("%d", &nota1);
        printf("Digite sua Nota 2 (0 a 100): ");
        scanf("%d", &nota2);
        printf("Digite sua Nota 3 (0 a 100): ");
        scanf("%d", &nota3);

        me = (nota1 + nota2 + nota3) / 3;
        ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 7;

        if (ma >= 90){
            printf("Sua nota foi de %d, Logo vc ficou com A no teste!", ma);
        } else if (ma >= 75 && ma < 90 ){
            printf("Sua nota foi de %d, logo vc ficou com B no teste!", ma);
        } else if (ma >= 60 && ma < 75){
            printf("Sua nota foi de %d, logo vc ficou com C no teste!", ma);
        } else if (ma >= 40 && ma < 60){
            printf("Sua nota foi de %d, logo vc ficou com D no teste!", ma);
        } else if ( ma < 40){
            printf("Sua nota foi de %d, logo vc ficou com E no teste!", ma);
        }
            return 0;
        
}