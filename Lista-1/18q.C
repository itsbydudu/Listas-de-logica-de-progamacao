#include <stdio.h>
#include <math.h>

int main (){

    int n1, n2, n3, n4;
    float resultado1;
    int opcoes;


    printf("Qual questao deseja escolher (1/2/3/4/5/6/7/8/9/10/11/12/13/14/15/16/17/18): ");
    scanf("%d", &opcoes);

switch (opcoes) {

        case 1:
            printf("Faca um programa que receba quatro numeros inteiros, calcule e mostre a soma desses numeros\n");
            printf("Digite os 4 numeros que deseja somar dando espaco entre eles: ");
            scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
            resultado1 = n1 + n2 + n3 + n4;
            printf("O resultado da soma foi de: %.2f", resultado1);
            break;
        
        case 2:
            float nota1, nota2, nota3;
            float resultado2;

            printf("Faca um programa que receba tres notas, calcule e mostre a media aritmetica entre elas.\n");
            printf("Para calcular sua media digite as suas 3 notas dando espaco entre elas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            resultado2 = (nota1 + nota2 + nota3) / 3;
            if (resultado2 >= 7)
                printf("Parabens voce passou, a sua nota e %.2f",resultado2);
            else {
                printf("Voce reprovou a sua nota ficou %.2f", resultado2);
            }
                break;
        
        case 3:
            //Vou estar ultilizando o float da "case 2" //
            float peso1, peso2, peso3;
            float resultado3;

            printf("Faca um programa que receba tres notas e seus respectivos pesos, calcule e mostre a media ponderada dessas notas.\n");
            printf("Digite as 3 notas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            printf("Digite os pesos das notas: ");
            scanf("%f %f %f", &peso1, &peso2, &peso3);
            resultado3 = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
            printf("O resultado da media ponderada e de: %.2f", resultado3);
            break;

        case 4:
            float salario_antigo, salario_novo;
            
            printf("Faca um programa que receba o salario de um funcionario, calcule e mostre o novo salario, sabendo-se que este sofreu um aumento de 25%.\n");
            printf("Digite seu Salaria atual: ");
            scanf("%f", &salario_antigo);

            salario_novo = salario_antigo * 1.25;
            printf("seu novo salario agr e de: %.2f", salario_novo);
            break;

        case 5:
            // Vou estar ultilizando o "salario antigo e novo" da case 4 //
            float calculo_porcento, porcento;

            printf("Faca um programa que receba o salario de um funcionario e o percentual de aumento, calcule e mostre o valor do aumento e o novo salario.\n");
            printf("Digite seu salario atual: ");
            scanf("%f", &salario_antigo);
            printf("Digite o seu aumento (sem a porcentagem): ");
            scanf("%f", &porcento);

            calculo_porcento = (1 + porcento / 100);
            salario_novo = salario_antigo * calculo_porcento; 
            printf("O seu novo salario agr e de: %.2f", salario_novo);
                 break;

        case 6:
            // vou estar ultilizando o "salario_novo" da case 4 //
            float salario_base;
            float gratificacao, imposto;
            printf("Faca um programa que receba o salario-base de um funcionario, calcule e mostre o salario a receber, sabendo-se que esse funcionaio tem gratificacao de 5porcento sobre o salario-base e paga imposto de 7porcento sobre o salario-base");
            printf("Digite o seu salario atual: ");
            scanf("%f", &salario_base);

            gratificacao = salario_base * 0.05;
            imposto = salario_base * 0.07; 
            salario_novo = salario_base + gratificacao - imposto;
            printf("o seu salario sera de: %.2f", salario_novo);
            break;

        case 7:
            // vou usar o "salario_base","gratifiação" e "imposto" da case 6 e "salario_novo" da case 4 //
            printf("Faca um programa que receba o salario-base de um funcionario, calcule e mostre seu salario a receber, Sabendo-se que esse funcionario tem gratificacao de R$ 50,00 e paga imposto de 10porcento ssobre o salario-base.\n");
            printf("Digite o seu Salario atual: ");
            scanf("%f", &salario_base);

            gratificacao = 50;
            imposto = salario_base * 0.1;
            salario_novo = salario_base + gratificacao - imposto;
            printf("O seu salario atualizado e de: %.2f", salario_novo);
            break;

        case 8:
            float deposito, taxa;
            float rendimento, valor_total;
            printf("Faca um programa que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.\n");
            printf("Digite o valor de deposito: ");
            scanf("%f", &deposito);
            printf("Digite o valor da taxa de juros (sem a porcentagem): ");
            scanf("%f", &taxa);

            rendimento = deposito * (taxa/100);
            valor_total = deposito + rendimento;
            printf("o seu rendimento foi de %.2f e o valor total ficou em %.2f", rendimento, valor_total);
            break;

        case 9:
            float area, base, altura;
            float cm, metros, calcular_cm_m;
            printf("Faca um programa que calcule e mostre a area de um triangulo. Sabe-se que: Area = (base * altura)/2\n");
            printf("Para descobrirmos a area do triangulo digite nessa sequencia a altura e a base do triangulo: ");
            scanf("%f %f",&altura, &base);
            printf("Deseja calcular em centimetros ou metros? (digite 1 para centrimetro e 2 para metro ): ");
            scanf("%f", &calcular_cm_m);
            area = (base * altura) / 2;
            if(calcular_cm_m == 1)
                printf("A area do triangulo e de: %.2fcm", area);
            else if (calcular_cm_m == 2){
                printf("A area do triangulo e de: %.2fm", area);                
            }
            break;
        
        case 10:
            // vou usar a "area" e "calcular_cm_m" da case 9 //
            float pi, raio;
            printf("Faca um programa que calcule e mostre a area de um circulo (considerando pi 3.14) \n");
            printf("Digite o valor do raio: ");
            scanf("%f", &raio);
            printf("Deseja calcular em centimetros ou metros? (digite 1 para centrimetro e 2 para metro ): ");
            scanf("%f", &calcular_cm_m);

            pi = 3.14;
            area = pi * (raio * raio);            
            if(calcular_cm_m == 1) {
                printf("A area do circulo e de: %.2fcm", area);
            } else if (calcular_cm_m == 2){
                printf("A area do circulo e de: %.2fm", area);                
            }
            break;

        case 11:
            float numero;
            float quadrado, cubo, raiz, raiz_cubica;
            printf("Faca um programa que receba um numero positivo e maior que zero, calcule e mostre: a) O numero digitado ao quadrado. b) O numero digitado ao cubo. c) A raiz quadrada do numero digitado. d) A raiz cubica do numero digitado\n");
            printf("Digite um numero positivo maior que zero q deseja calcular: ");
            scanf("%f", &numero);

            if(numero > 0) {
                quadrado = numero * numero;
                printf("O numero ao quadrado: %.2f\n", quadrado);
                cubo = numero * numero * numero;
                printf("O numero ao cubo: %.2f\n", cubo);
                raiz =  sqrt(numero);
                printf("A raiz do numero: %.2f\n", raiz);
                raiz_cubica = cbrt(numero);
                printf("A raiz cubica do numero: %.2f\n", raiz_cubica);
            } else {
                printf("O numero digitado e menor que zero");
            }
            break;

        case 12:
            float numero1, numero2, resultado;
            printf("Faca um programa que receba dois numeros maiores que zero, calcule e mostre um elevado ao outro\n");
            printf("Digite o primeiro numero (base): ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero (expoente): ");
            scanf("%f", &numero2);
            if (numero1 > 0 && numero2 > 0) {
                resultado = pow(numero1, numero2);
                printf("%.2f elevado a %.2f e igual a %.2f\n", numero1, numero2, resultado);
            } else {
                printf("o numero colocado n atendo os requisitos!");
            }
            break;

        case 13:
            float pes, pelegadas, jardas, milhas;
            float calculo_polegadas, calculo_jardas, calculo_milhas;
            printf("Faca um programa que que receba uma medida em pes, faca a conversoes a seguir e mostre os resultados\n");
            printf("Digite a sua medida em pes: ");
            scanf("%f", &pes);

            calculo_polegadas = pes * 12;
            printf("Sua medida em polegadas e de: %.2fpol\n", calculo_polegadas);
            calculo_jardas = pes * 0.333333;
            printf("Sua medida em jardas e de: %.2fjardas\n", calculo_jardas);
            calculo_milhas = pes * 0.000189;
            printf("Sua medida em milhas e de: %.2fmilhas\n", calculo_milhas);
            break;
        
        case 14:
            int ano_nasc, idade_atual, idade_em_2050;
            printf("Faca um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre a idade da pessoa e quantos anos ela tera em 2050\n");
            printf("Digite o ano em q vc naseu: ");
            scanf("%d", &ano_nasc);

            idade_atual = 2026 - ano_nasc;
            idade_em_2050 = 2050 - ano_nasc;
            printf("Sua idade atual em 2026 e %d e vc tera %d em 2050", idade_atual, idade_em_2050);
            break;

        case 15:
            float calculo_imposto, valor_imposto,  percentual, lucro, preco_base;
            
            printf(" O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre\n");
            printf("Digite o valor base do veiculo: ");
            scanf("%f", &preco_base);
            printf("Digite o percentual de lucro (sem a porcentagem): ");
            scanf("%f", &percentual);
            printf("Digite o imposto que caira sobre o veiculo (sem a porcentagem): ");
            scanf("%f", &imposto);

            lucro = preco_base * (percentual / 100);
            printf("O lucro sobre o carro sera de: R$%.2f\n", lucro);
            calculo_imposto = preco_base * (imposto / 100);
            printf("O valor do imposto sera de: R$%.2f\n", calculo_imposto);
            valor_total = preco_base + lucro + calculo_imposto;
            printf("O valor total do veiculo sera de: R$%.2f\n", valor_total);
            break;

        case 16:
            float valor_da_hora, horas;
            float salario_minimo, salario_bruto, salario_recebido;
            printf("Faca um programa que receba o numero de horas trabalhadas e o valor do salário minimo. Calcule e mostre o salario a receber seguindo as regras abaixo\n");
            printf("Digite as suas horas trabalhadas: ");
            scanf("%f", &horas);
            printf("Digite o salario minimo: ");
            scanf("%f", &salario_minimo);

            valor_da_hora = salario_minimo / 2; 
            salario_bruto = valor_da_hora * horas;
            imposto = salario_bruto * 0.03;
            salario_recebido = salario_bruto - imposto;

            printf("O valor da hora e de: R$%.2f\n", valor_da_hora);
            printf("O valor do Salario bruto e de: R$%.2f\n", salario_bruto);
            printf("O valor do imposto e de: R$%.2f\n", imposto);
            printf("O salario final que ira receber e de: R$%.2f\n", salario_recebido);
            break;

    case 17: 
            float salario, saldo, valor_cheque1, valor_cheque2;
            float cpmf_cheque1, cpmf_cheque2;

            printf("Um trabalhador recebeu seu salario e depositou em sua conta corrente bancaria.\n");
            printf("Digite o valor do seu salario: ");
            scanf("%f", &salario);

            saldo = salario; 

            printf("Digite o valor do primeiro cheque emitido: ");
            scanf("%f", &valor_cheque1);
            cpmf_cheque1 = valor_cheque1 * 0.0038;
            saldo = saldo - valor_cheque1 - cpmf_cheque1;

            printf("Digite o valor do segundo cheque emitido: ");
            scanf("%f", &valor_cheque2);
            cpmf_cheque2 = valor_cheque2 * 0.0038;
            saldo = saldo - valor_cheque2 - cpmf_cheque2;

            printf("Saldo atual da conta: %.2f\n", saldo);
            break;

        case 18: 
            float peso_saco_kg, racao_por_gato_g, racao_saco_g;
            float consumo_diario_g, consumo_5dias_g, racao_restante_g;

            printf("Pedro comprou um saco de racao com peso em quilos. Ele possui dois gatos,\n");
            printf("para os quais fornece a mesma quantidade de racao em gramas por dia.\n");

            printf("Digite o peso do saco de racao (em kg): ");
            scanf("%f", &peso_saco_kg);

            printf("Digite a quantidade de racao fornecida para cada gato por dia (em gramas): ");
            scanf("%f", &racao_por_gato_g);

            racao_saco_g = peso_saco_kg * 1000;      
            consumo_diario_g = racao_por_gato_g * 2; 
            consumo_5dias_g = consumo_diario_g * 5;  

            racao_restante_g = racao_saco_g - consumo_5dias_g;

            printf("Racao restante no saco apos 5 dias: %.2f gramas\n", racao_restante_g);
            break;
            
        default: 
            printf("opcao invalida");
            break;

}
}

