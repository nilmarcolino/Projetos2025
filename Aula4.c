#include <stdio.h>

int main() {
    int idade;
    float renda;
    int dependente;

    //Primeira condição: se a idade do usuário estar entre 18 e 65 anos.
    //Segunda condição: se a renda do usuário é menor que 3000 mil.
    //Terceira condição: se o número de dependentes é maior que dois.
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependente);

    // Estrutura de decisão aninhada
    if (idade >= 18 && idade < 65) {
        if (renda < 3000) {
            if (dependente > 2) {
                printf("Você atende a todos os critérios.\n");
            } else {
                printf("Você não atende ao critério de dependentes.\n");
            }
        } else {
            printf("Você não atende ao critério de renda.\n");
        }
    } else {
        printf("Você não atende ao critério de idade.\n");
    }
    

    return 0;
}