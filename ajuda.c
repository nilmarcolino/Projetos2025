#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char caractere;
    char string[50];

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número real: ");
    scanf("%f", &real);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Note o espaço antes de %c para ignorar o '\n'

    printf("Digite uma string (sem espaços): ");
    scanf("%s", string);

    printf("\nValores digitados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);

    



    return 0;
}
