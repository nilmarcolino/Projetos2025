#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados de cada carta
    char estado1 = 'A';       // Estado da carta 1
    char codigo1[] = "A01";   // Código da carta 1
    char cidade1[] = "Recife"; // Nome da cidade da carta 1
    int populacao1 = 234000000; // População da cidade da carta 1

    char estado2 = 'A';       // Estado da carta 2
    char codigo2[] = "A02";   // Código da carta 2
    char cidade2[] = "Salvador"; // Nome da cidade da carta 2
    int populacao2 = 345000000; // População da cidade da carta 2

    // Exibindo as informações armazenadas
    printf("Dados das cartas:\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n\n", populacao1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);

    return 0;
}

