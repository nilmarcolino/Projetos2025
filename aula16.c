#include <stdio.h>

int main() {
    float nota;

    //Inserindo um do while para repetir a solicitação da nota caso o usuário insira um valor inválido.
    do {
        // Solicita a entrada da nota ao usuário
        printf("Digite a nota do aluno (0 a 10): ");
        scanf("%f", &nota);

        // Avalia a nota usando if, else if e else
        if (nota >= 9 && nota <= 10) {
            printf("Conceito: A\n");
        } else if (nota >= 7 && nota < 9) {
            printf("Conceito: B\n");
        } else if (nota >= 5 && nota < 7) {
            printf("Conceito: C\n");
        } else if (nota >= 3 && nota < 5) {
            printf("Conceito: D\n");
        } else if (nota >= 0 && nota < 3) {
            printf("Conceito: E\n");
        } else {
            // Trata casos de entrada inválida
            printf("Nota inválida. Por favor, insira uma nota entre 0 e 10.\n");
        }
    } while (nota < 0 || nota > 10); //Repete a solicitação da nota caso o valor inserido seja inválido.

    printf("Obrigado por usar o sistema de notas!\n");

    return 0;
}

