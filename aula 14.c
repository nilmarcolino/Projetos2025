#include <stdio.h>

int main() {
    int opcao;

    // Exibe o menu ao usuário
    printf("===== Menu =====\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Depósito\n");
    printf("3 - Realizar Saque\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    
    // Lê a entrada do usuário
    scanf("%d", &opcao);

    // Processa a entrada com o switch
    switch (opcao) {
        
        case 1:
            printf("Saldo atual: R$ 1.000,00\n");
            break;
        case 2:
            printf("Depósito realizado com sucesso.\n");
            break;
        case 3:
            printf("Saque realizado com sucesso.\n");
            break;
        case 4:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
    }

    return 0;
}
