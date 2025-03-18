#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.50; // Exemplo de saldo inicial

    printf("Escolha uma opção:\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer depósito\n");
    printf("3 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("O seu saldo é: R$ %.2f\n", saldo);
            break;
        case 2: {
            int banco, agencia, conta;
            printf("Digite o banco que deseja fazer o depósito:\n");
            printf("1 = Caixa Econômica\n");
            printf("2 = Banco do Brasil\n");
            printf("3 = Itaú\n");
            scanf("%d", &banco);

            printf("Digite o número da agência:\n");
            scanf("%d", &agencia);

            printf("Digite o número da conta:\n");
            scanf("%d", &conta);

            float valorDeposito;
            printf("Digite o valor a depositar:\n");
            scanf("%f", &valorDeposito);

            printf("Depósito de R$ %.2f realizado com sucesso para o banco %d, agência %d, conta %d.\n", valorDeposito, banco, agencia, conta);
            break;
        }
        case 3:
            printf("Saindo do sistema. Até logo!\n");
            break;
        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
    }

    return 0;
}
