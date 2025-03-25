#include<stdio.h>
#include "utilitarios/iniciacao.h"

int main() {

// Verifica se o jogador quer sair
if (atributo1 == 0) {
    printf("Jogo encerrado. Obrigado por participar!\n");
    return 0; // Sai do programa
}

    // Comparação do primeiro atributo usando switch e if/else
    switch (atributo1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
            } else if (populacao1 < populacao2) {
                printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma população.\n");
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
                printf("Empate! Recife e Salvador têm a mesma área.\n");
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
                printf("Empate! Recife e Salvador têm o mesmo PIB.\n");
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
                printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
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
                printf("Empate! Recife e Salvador têm a mesma densidade demográfica.\n");
            }
            //Exibir o resultado da comparação da densidade demográfica.
            printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);
            printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);
           
            break;
        case 6:
            printf("Regras do jogo: Compare os atributos e o maior valor vence, com exceção da densidade demográfica, onde o menor valor ganha!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;


            return 0;
    }

}