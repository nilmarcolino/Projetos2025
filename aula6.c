#include <stdio.h>
int main () {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("Número par.\n");
            printf("Positivo.\n");
            
        } else {
            printf("Número ímpar.\n");
            printf("Positivo.\n");
        }
    } else if (numero == 0) {
        printf("Número é zero.\n");
    } else {
        printf("Número negativo.\n");
    }

    return 0;
}