#include <stdio.h>

int main() {
    int numero = 24;

    switch (numero) {
        case 10:
            printf("O número é exatamente 10.\n");
            break;
        case 20:
        case 24: // Usando o mesmo bloco para múltiplos valores
            if (numero == 20) {
                printf("O número é 20.\n");
            } else if (numero > 20 && numero <= 24) {
                printf("O número está entre 21 e 24.\n");
            }
            break;
        case 30:
            printf("O número é 30.\n");
            break;
        default:
            printf("Número não reconhecido.\n");
    }

    return 0;
}
