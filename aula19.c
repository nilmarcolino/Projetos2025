#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

int main() {

    //Programa que recebe duas cores e retorna a cor secundária resultante da mistura.
    char cor1[10], cor2[10];

    printf("Digite a primeira cor: ");
    scanf("%s", cor1);

    printf("Digite a segunda cor: ");
    scanf("%s", cor2);

    //Para comparar strings, usamos a função strcmp() da biblioteca string.h
    if ((strcmp(cor1, "azul") == 0 && strcmp(cor2, "vermelho") == 0) || (strcmp(cor1, "vermelho") == 0 && strcmp(cor2, "azul") == 0)) 
    {
        printf("A cor resultante é roxo.\n");
        
    } else if ((strcmp(cor1, "azul") == 0 && strcmp(cor2, "amarelo") == 0) || (strcmp(cor1, "amarelo") == 0 && strcmp(cor2, "azul") == 0))
    {
        printf("A cor resultante é verde.\n");

    } else if ((strcmp(cor1, "vermelho") == 0 && strcmp(cor2, "amarelo") == 0) || (strcmp(cor1, "amarelo") == 0 && strcmp(cor2, "vermelho") == 0)) 
    {
        printf("A cor resultante é laranja.\n");

    } else if ((strcmp(cor1, "preto") == 0 && strcmp(cor2, "branco") == 0) || (strcmp(cor1, "branco") == 0 && strcmp(cor2, "preto") == 0)) 
    {
        printf("A cor resultante é cinza.\n");
    } else
    {
        printf("As cores não formam uma cor secundária.\n");
    }


    return 0;
}
