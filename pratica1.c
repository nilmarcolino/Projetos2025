#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct Pessoa pessoas[10];
    int n, i;
    FILE *arquivo; // Ponteiro para o arquivo

    printf("Quantas pessoas você deseja adicionar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade de %s: ", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);
    }

    // Salvando os dados em um arquivo
    arquivo = fopen("dados_pessoas.txt", "w"); // Abre o arquivo em modo de escrita
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(arquivo, "Nome: %s, Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    fclose(arquivo); // Fecha o arquivo

    printf("\nOs dados foram salvos no arquivo 'dados_pessoas.txt'.\n");

    return 0;
}
