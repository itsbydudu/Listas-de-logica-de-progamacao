#include <stdio.h>
#include <string.h>   // usada somente para strcpy (copiar nomes na exclusao)
 
int main() {
    // ---------- Vetores (a mesma posicao = o mesmo produto) ----------
    int codigo[20];
    char nome[20][50];
    float preco[20];
    int quantidade[20];
    int total = 0;          // quantos produtos estao cadastrados
 
    // ---------- Variaveis auxiliares ----------
    int opcao;
    int i;
    int codigoBusca;
    int posicao;            // posicao encontrada (-1 = nao encontrou)
    int repetido;           // 1 se o codigo ja existe
 
    do {
        printf("\n===== SISTEMA DE CADASTRO =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
 
        switch (opcao) {
 
            // ---------------- CADASTRAR ----------------
            case 1:
                if (total == 20) {
                    printf("\nLimite maximo de cadastros atingido.\n");
                } else {
                    printf("\nCodigo: ");
                    scanf("%d", &codigoBusca);
 
                    // verifica se o codigo ja existe
                    repetido = 0;
                    for (i = 0; i < total; i++) {
                        if (codigo[i] == codigoBusca) {
                            repetido = 1;
                        }
                    }
 
                    if (repetido == 1) {
                        printf("Ja existe um produto com esse codigo.\n");
                    } else {
                        codigo[total] = codigoBusca;
                        printf("Nome (sem espacos): ");
                        scanf("%s", nome[total]);
                        printf("Preco: ");
                        scanf("%f", &preco[total]);
                        printf("Quantidade: ");
                        scanf("%d", &quantidade[total]);
 
                        total++;   // so depois de cadastrar tudo
                        printf("Produto cadastrado com sucesso!\n");
                    }
                }
                break;
 
            // ---------------- CONSULTAR ----------------
            case 2:
                printf("\nDigite o codigo do produto: ");
                scanf("%d", &codigoBusca);
 
                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }
 
                if (posicao == -1) {
                    printf("Registro nao encontrado.\n");
                } else {
                    printf("\nCodigo: %d", codigo[posicao]);
                    printf("\nNome: %s", nome[posicao]);
                    printf("\nPreco: %.2f", preco[posicao]);
                    printf("\nQuantidade: %d\n", quantidade[posicao]);
                }
                break;
 
            // ---------------- LISTAR ----------------
            case 3:
                if (total == 0) {
                    printf("\nNenhum registro cadastrado.\n");
                } else {
                    // de 0 ate total-1: so essas posicoes tem produtos validos
                    for (i = 0; i < total; i++) {
                        printf("\nCodigo: %d", codigo[i]);
                        printf("\nNome: %s", nome[i]);
                        printf("\nPreco: %.2f", preco[i]);
                        printf("\nQuantidade: %d\n", quantidade[i]);
                    }
                }
                break;
 
            // ---------------- ALTERAR ----------------
            case 4:
                printf("\nDigite o codigo do produto que deseja alterar: ");
                scanf("%d", &codigoBusca);
 
                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }
 
                if (posicao == -1) {
                    printf("Registro nao encontrado.\n");
                } else {
                    // grava os novos valores na MESMA posicao
                    printf("Novo nome (sem espacos): ");
                    scanf("%s", nome[posicao]);
                    printf("Novo preco: ");
                    scanf("%f", &preco[posicao]);
                    printf("Nova quantidade: ");
                    scanf("%d", &quantidade[posicao]);
                    printf("Produto alterado com sucesso!\n");
                }
                break;
 
            // ---------------- EXCLUIR ----------------
            case 5:
                printf("\nDigite o codigo do produto que deseja excluir: ");
                scanf("%d", &codigoBusca);
 
                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }
 
                if (posicao == -1) {
                    printf("Nao foi possivel excluir.\n");
                } else {
                    // desloca os seguintes uma posicao para tras, em TODOS os vetores
                    for (i = posicao; i < total - 1; i++) {
                        codigo[i] = codigo[i + 1];
                        strcpy(nome[i], nome[i + 1]);
                        preco[i] = preco[i + 1];
                        quantidade[i] = quantidade[i + 1];
                    }
                    total--;
                    printf("Produto excluido com sucesso!\n");
                }
                break;
 
            // ---------------- SAIR ----------------
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
 
            // ---------------- OPCAO INVALIDA ----------------
            default:
                printf("\nOpcao invalida.\n");
        }
 
    } while (opcao != 0);
 
    return 0;
}