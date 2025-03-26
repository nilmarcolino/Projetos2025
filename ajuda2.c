#include <locale.h> // Para corrigir caracteres especiais.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar valores como "true" e "false"

int main()
{

    setlocale(LC_ALL, "pt_PT.UTF-8"); // Configura o locale com base no sistema operacional

    
    // Recebendo os dados da carta de Recife.
    char estado1[] = "Pernambuco";
    char codigoDaCarta1[] = "A01";
    char cidade1[] = "Recife";
    int populacao1 = 1490000; // Representando 1.490.000
    float area1 = 218.400f;   // Área em km²
    float PIB1 = 55000.00;    // PIB em R$
    int pontoTuristico1 = 30; // Número de pontos turísticos

    // Recebendo os dados da carta de Salvador.
    char estado2[] = "Bahia";
    char codigoDaCarta2[] = "B01";
    char cidade2[] = "Salvador";
    int populacao2 = 2420000; // Representando 2.420.000
    float area2 = 693.400f;   // Área em km²
    float PIB2 = 62694.00;    // PIB em R$
    int pontoTuristico2 = 30; // Número de pontos turísticos

    // Dados para exibição da carta de Recife.
    printf("=== Carta de Recife ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoTuristico1);

    // Dados para exibição da carta de Salvador.
    printf("=== Carta de Salvador ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoTuristico2);

    printf(" Super Trunfo - Tema 2 - NIVEL NOVATO\n"); // NIVEL NOVATO ************

    //1. Comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.
    //Com base em um único atributo: População.

    if(populacao1 > populacao2)
    {
        printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
    }
    else if (populacao1 < populacao2)
    {
        printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
    }
    else
    {
        printf("Empate! Recife e Salvador têm a mesma população.\n");
    }

    //2.Calcular  e exibir densidade demográfica e PIB per capita: Recife e Salvador. 
    //Densidade Demográfica:
    float densidadeDemografica1 = (float)populacao1 / area1; // Recife
    printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);

    float densidadeDemografica2 = (float)populacao2 / area2; // Salvador
    printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);

    //PIB per capita:
    float PIBperCapita1 = (PIB1 * 1000000) / (float)populacao1; // Recife
    printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);

    float PIBperCapita2 = (PIB2 * 1000000) / (float)populacao2; // Salvador
    printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);

    //3.Comparar um atributo escolhido: PIB per capita: Recife e Salvador.
    //4 Determinar a Carta vencedora do atributo escolhido: PIB per capita.
    if (PIBperCapita1 > PIBperCapita2)
    {
    printf("Recife tem maior PIB per capita que Salvador: Recife é a vencedora!\n");
    }
    else if (PIBperCapita1 < PIBperCapita2)
    {
    printf("Salvador tem maior PIB per capita que Recife: Salvador é a vencedora!\n");
    }
    else
    {
    printf("Empate! Recife e Salvador têm o mesmo PIB per capita.\n");
    }

    /*5. Exibir o resultado da comparação: carta vencedora, atributo utilizado na comparação 
         e os valores das duas cartas para aquele atributo.*/

    if (PIBperCapita1 > PIBperCapita2)
    {
        printf("\nResultado: Recife venceu!\n");
    } 
    else if (PIBperCapita2 < PIBperCapita1)
    {
    printf("\nResultado: Salvador venceu!\n");
    } 
    else
    {
    printf("\nResultado: Empate!\n");
    }

    //Comparação de cartas: PIB per capita
    printf("Carta 1 - Recife (PE): %.2f\n", PIBperCapita1);
    printf("Carta 2 - Salvador (BA): %.2f\n", PIBperCapita2);

    return 0;
}
