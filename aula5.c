#include <stdio.h>

int main() {
    int idade;
    float renda;
    int dependente;

    // Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependente);

    // Inicializar uma variável para controlar o estado de aprovação
    int atendeTodosOsCritérios = 1;

    // Verificar os critérios separadamente
    if (idade < 18 || idade >= 65) {
        printf("Você não atende ao critério de idade.\n");
        atendeTodosOsCritérios = 0;
    }

    if (renda >= 3000) {
        printf("Você não atende ao critério de renda.\n");
        atendeTodosOsCritérios = 0;
    }

    if (dependente <= 2) {
        printf("Você não atende ao critério de dependentes.\n");
        atendeTodosOsCritérios = 0;
    }

    // Resultado final
    if (atendeTodosOsCritérios) {
        printf("Você atende a todos os critérios.\n");
    }

    return 0;
}
