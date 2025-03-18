#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int escolhaJogador, escolhaComputador;
  srand(time(0));

  printf("***Jogo de Jokenpô***\n");
  printf("Escolha uma opção: \n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  scanf("%d", &escolhaJogador);  

  escolhaComputador = rand() % 3 + 1;  
  
  switch (escolhaJogador)
  {
    case 1:
      printf("Jogador: Pedra - \n");
      break;
    case 2:
      printf("Jogador: Papel - \n");
      break;
    case 3:
      printf("Jogador: Tesoura - \n");
    default:
      printf("Opção invalida \n");
      break;
    
    }
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}