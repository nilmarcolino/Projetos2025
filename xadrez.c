#include <stdio.h>

int main() {

    printf("________Desafio Peça de Xadrez: nível novato\n");
    
    printf("\n");
// Os códigos abaixos simulam os movimentos de três peças de xadrez: Torre, Bispo e Rainha.

// Definindo variáveis para os movimentos das peças
    int Torre = 1, Bispo = 1, Rainha = 1;

    //MOVIMENTO DA TORRE USANDO WHILE
    //A Torre move-se 5 casas para a direita
   
    printf("Movimento da Torre: 5 casas para a direita:\n");
    while (Torre <= 5) {
        printf("Direita\n");
        Torre++;

  }

    printf("\n");

    //MOVIMENTO DO BISPO USANDO FOR
    //O Bispo move-se 5 casas na diagonal superior direita.

    printf("Movimento do Bispo: 5 casas na diagonal superior direita:\n");
    for (int Bispo = 1; Bispo <= 5; Bispo++) {
        printf("Cima direita\n");
        
       
    }

    printf("\n");

    //MOVIMENTO DA RAINHA USANDO DO WHILE
    //A Rainha move-se 8 casas para a esquerda.

    printf("Movimento da Rainha: 8 casas para a esquerda:\n");
    do {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= 8);

    return 0;
}
