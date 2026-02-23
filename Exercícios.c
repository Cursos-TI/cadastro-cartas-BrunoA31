#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhadoJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhadoJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhadoJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaComputador == escolhadoJogador)
    {
        printf("### Jogo empatou! ###\n");
    } else if ((escolhadoJogador == 1) && (escolhaComputador == 3) ||
               (escolhadoJogador == 2) && (escolhaComputador == 1) ||
               (escolhadoJogador == 3) && (escolhaComputador == 2))
    {
        printf("### Parabéns, você ganhou! ###\n");
    }
    else {
        printf("### Você perdeu! ###\n");
    }
    

}
 //Menu interativo - Tema 3: Nível Aventureiro
  printf("Esolha um atributo:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Atributo: ");
  scanf("%d", &escolhaJogador);

  switch (escolhaJogador)
  {
  case 1:
    printf("Carta")
    break;
  
  default:
    break;
  }