#include <stdio.h>

int main() {
    int idade;
    int ano_nascimento;
    int ano_atual = 2025; // Pode remover o prompt de entrada para "ano_atual" se for fixo.

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Calcula a idade
    idade = ano_atual - ano_nascimento;
    printf("Sua idade é: %d\n", idade);

    // Classifica o grupo etário
    if (idade >= 60) {
        printf("Você é idoso.\n");
    } else if (idade >= 18) {
        printf("Você é adulto.\n");
    } else if (idade >= 11) {
        printf("Você é jovem.\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}