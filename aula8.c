#include<stdio.h>
int main() {
    
    int opcao;
    float saldo = 1.00;
    float deposito = 0.00;
    float saque = 0.00;    

    printf("Escolha uma opção:\n ");
    printf("1 - Verificar saldo\n ");
    printf("2 - Fazer depósito\n ");           
    printf("3 - Fazer saque\n ");
    scanf("%d", &opcao);
    
    switch (opcao) {

        case 1:
            printf("O seu saldo é: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o banco que deseja fazer o depósito\n");
            printf("1 = Caixa Economica\n");
            printf("2 = Banco do Brasil\n");
            printf("3 = Itaú\n");

            printf("Digite a agência\n");
            printf("Digite a conta\n");
            
            break;
        case 3:
            printf("Digite o valor a sacar\n");
            printf("Digite a agencia que deseja depositar\n");
            printf("Digite a conta que deseja depositar\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

   
    return 0;
}