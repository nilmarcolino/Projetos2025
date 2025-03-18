#include<stdio.h>
int main() {
    
    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);

    switch (variavel) {

        case 1:
            printf("Código a ser executado de variáver == 1\n");
            break;
        case 2:
            printf("Código a ser executado de variáver == 2\n");
            break;
        case 3:
            printf("Código a ser executado de variáver == 3\n");
            break;
        default:
            printf("Caso default\n");
            break;
    }

   
    return 0;
}