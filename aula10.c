#include <stdio.h>

int main() {
    
    int opcao;

    printf("menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");

    scanf("%d", &opcao);    

    switch(opcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. O jogador 1 joga com as pecas brancas\n");
            printf("2. O jogador 2 joga com as pecas pretas\n");
            printf("3. O jogador 1 comeca o jogo\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }   

    return 0;
}   