#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Alef de Jesus Caires Castro

int main() {
// Definição de variáveis para cada atributo das cidades 1 e 2


    char estado1, estado2;
    char codigo1[20];
    char codigo2[20];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;
    
    //Preenchimento de cadastro da carta 1 ultilizando o scanf
    //pede ao usuario que insira os dados da primeira carta


    printf("Carta 1: \n");

    printf("Digite o Estado(A-Z): \n");
    scanf("%c", &estado1);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", codigo1);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Area em km²:\n");
    scanf("%f", &areakm1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos 1:\n");
    scanf("%d", &pontosturisticos1);

       
    printf("\nCarta 1:\n");
    
    printf("Estado: %c\n",estado1); 
    printf("Codigo da carta: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomedacidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area em km²: %f\n",areakm1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos1);


    printf("\nCarta 2: \n");

    printf("Digite o estadoA-Z: \n");
    scanf("%c", estado2);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", &codigo1);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Populaçao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Area em km²: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", pontosturisticos2);

    
    printf("\nCarta 2:\n");

    printf("Estado: %c\n",estado2); 
    printf("Codigo da carta: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomedacidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area em km²: %f\n",areakm2);
    printf("PIB: %f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos2);


          
   
    return 0;
}


