#include <locale.h>  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    setlocale(LC_ALL, "pt_PT.UTF-8"); // Configura o locale com base no sistema operacional
      
    char estado1[] = "Pernambuco";
    char codigoDaCarta1[] = "A01";
    char cidade1[] = "Recife";
    int populacao1 = 1490000; //Representando 1.490.000
    float area1 = 218.400f; //Área em km². O "f" é para explicitar que o número é do tipo float.
    float PIB1 = 55000.00; //PIB em R$
    int pontoTuristico1 = 30; //Número de pontos turísticos
    float densidadeDemografica1 = populacao1 / area1; //O resultado da divisão da população pela área (hab/km²).
    float PIBperCapita1 = (PIB1 * 1000000) / populacao1; //Resultado da divisão do PIB pela população.

    
    //Recebendo os dados da carta de Salvador.
    char estado2[] = "Bahia";
    char codigoDaCarta2[] = "B01";
    char cidade2[] = "Salvador";    
    int populacao2 = 2420000; //Representando 2.420.000
    float area2 = 693.400f; //Área em km². O "f" é para explicitar que o número é do tipo float.
    float PIB2 = 62694.00; //PIB em R$
    int pontoTuristico2 = 30; //Número de pontos turísticos
    float densidadeDemografica2 = populacao2 / area2; //O resultado da divisão da população pela área (hab/km²).
    float PIBperCapita2 = (PIB2 * 1000000) / populacao2; //Resultado da divisão do PIB pela população.


    //Dados para exibição da carta de Recife.
    printf("=== Carta de Recife ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoTuristico1);
    printf("Densidade Demográfica: %.2f\n", populacao1 / area1);
    printf("PIB per Capita: %.2f\n", (PIB1 * 1000000) / populacao1);

    //Dados para exibição da carta de Salvador.
    printf("=== Carta de Salvador ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Demográfica: %.2f\n", populacao2 / area2);
    printf("PIB per Capita: %.2f\n", (PIB2 * 1000000) / (float)populacao2);    

    //Comparar as cartas de Recife e Salvador.
    int atributo1, atributo2;
    srand(time(NULL));
        
    //Escolha do primeiro atributo para comparar as cartas.
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Regra do jogo\n");

    scanf("%d", &atributo1);
    switch (atributo1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
            } else if (populacao1 < populacao2) {
                printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador tem a mesma população.\n");
            }
            //Exibir o resultado da comparação da população.
            printf("População de Recife: %d\n", populacao1);
            printf("População de Salvador: %d\n", populacao2);
            break;
        case 2:
            if (area1 > area2) {
                printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
            } else if (area1 < area2) {
                printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador tem a mesma área. \n");
            }
            //Exibir o resultado da comparação da área.
            printf("Área de Recife em km²: %.2f\n", area1);
            printf("Área de Salvador em km²: %.2f\n", area2);
            break;
        case 3:
            if (PIB1 > PIB2) {
                printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
            } else if (PIB1 < PIB2) {
                printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador tem o mesmo PIB.\n");
            }
            //Exibir o resultado da comparação do PIB.
            printf("PIB de Recife R$: %.2f\n", PIB1);
            printf("PIB de Salvador R$: %.2f\n", PIB2);
            break;
        case 4:
            if (pontoTuristico1 > pontoTuristico2) {
                printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
            } else if (pontoTuristico1 < pontoTuristico2) {           
                printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos!\n");
            }
            //Exibir o resultado da comparação dos pontos turísticos.
            printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);       
            printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
            break;
        case 5:
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
            } else if (densidadeDemografica1 > densidadeDemografica2) {                       
                printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma densidade demográfica!\n");
            }
            //Exibir o resultado da comparação da densidade demográfica.
            printf("Densidade Demográfica de Recife: %.2f\n", densidadeDemografica1);
            printf("Densidade Demográfica de Salvador: %.2f\n", densidadeDemografica2);
            break;
        case 6:
        printf("Regras do jogo: O jogador escolhe dois atributos diferentes para comparar as cartas. "
            " A carta com o maior valor vence. Exceto na comparação do atributo 'densidade demográfica': vence "
            " a menor carta. \n"); //Uso das aspas duplas para quebra de linhas.
            break;  
        default:
            printf("Opção inválida!\n");
            break;
    }

//Escolha do segundo atributo para comparar as cartas.
//int atributo2;
printf("Escolha o segundo atributo para comparar as cartas:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("6 - Regra do jogo\n");

scanf("%d", &atributo2);
switch (atributo2) {
case 1: 
    if (populacao1 > populacao2) {
        printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
    } else if (populacao1 < populacao2) {
        printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
    } else {
        printf("Empate! Recife e Salvador tem a mesma população.\n");
    }
    //Exibir o resultado da comparação da população.
    printf("População de Recife: %d\n", populacao1);
    printf("População de Salvador: %d\n", populacao2);
    break;
case 2:
    if (area1 > area2) {
        printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
    } else if (area1 < area2) {
        printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
    } else {
        printf("Empate! Recife e Salvador tem a mesma área. \n");
    }
    //Exibir o resultado da comparação da área.
    printf("Área de Recife em km²: %.2f\n", area1);
    printf("Área de Salvador em km²: %.2f\n", area2);
    break;
case 3:
    if (PIB1 > PIB2) {
        printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
    } else if (PIB1 < PIB2) {
        printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
    } else {
        printf("Empate! Recife e Salvador tem o mesmo PIB.\n");
    }
    //Exibir o resultado da comparação do PIB.
    printf("PIB de Recife R$: %.2f\n", PIB1);
    printf("PIB de Salvador R$: %.2f\n", PIB2);
    break;
case 4:
    if (pontoTuristico1 > pontoTuristico2) {
        printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
    } else if (pontoTuristico1 < pontoTuristico2) {           
        printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
    } else {
        printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos!\n");
    }
    //Exibir o resultado da comparação dos pontos turísticos.
    printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);       
    printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
    break;
case 5:
    if (densidadeDemografica1 < densidadeDemografica2) {
        printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
    } else if (densidadeDemografica1 > densidadeDemografica2) {
        printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
    } else {
        printf("Empate! Recife e Salvador têm a mesma densidade demográfica!\n");
    }
    //Exibir o resultado da comparação da densidade demográfica.
    printf("Densidade Demográfica de Recife: %.2f\n", densidadeDemografica1);
    printf("Densidade Demográfica de Salvador: %.2f\n", densidadeDemografica2);
    break;
case 6:
printf("Regras do jogo: O jogador escolhe dois atributos diferentes para comparar as cartas. "
    " A carta com o maior valor vence. Exceto na comparação do atributo 'densidade demográfica': vence "
    " a menor carta. \n"); //Uso das aspas duplas para quebra de linhas.
    break;  
default:
    printf("Opção inválida!\n");
}



      return 0;
}