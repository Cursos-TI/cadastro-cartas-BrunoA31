#include <stdio.h>

// Desafio Super Trunfo - Países
//Tema 3

int main() {
    char carta1[] = "Brasil";
    char carta2[] = "Argentina";
    int populacao1 = 213400000;
    int populacao2 = 47300000;
    float area1 = 8516000;
    float area2 = 2780000;
    float pib1 = 3235;
    float pib2 = 633;
    int pontosturisticos1 = 25;
    int pontosturisticos2 = 32;
    float densidade1 = 23.86;
    float densidade2 = 16;
    int escolhaJogador;

//Menu interativo utilizando o switch e comparação de atributos utilizando o if-else - Tema 3: Nível Aventureiro
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
    printf("Brasil - População: %d - - Argentina - População: %d\n", populacao1, populacao2);
    if (populacao1 == populacao2)
  {
    printf("Empate!\n");
  } else if (populacao1 > populacao2)
  {
    printf("Brasil venceu!\n");
  } else {
    printf("Argentina venceu!\n");
  }
    break;

  case 2:
    printf("Brasil - Área: %f km²- - Argentina - Área: %f km²\n", area1, area2);
    if (area1 == area2)
  {
    printf("Empate!\n");
  } else if (area1 > area2)
  {
    printf("Brasil venceu!\n");
  } else {
    printf("Argentina venceu!\n");
  }
    break;

  case 3:
    printf("Brasil - PIB: %f (bilhões de dólares) - - Argentina - PIB: %f (bilhões de dólares)\n", pib1, pib2);
    if (pib1 == pib2)
  {
    printf("Empate!\n");
  } else if (pib1 > pib2)
  {
    printf("Brasil venceu!\n");
  } else {
    printf("Argentina venceu!\n");
  }
    break;

  case 4:
    printf("Brasil - Pontos turísticos: %d - - Argentina - Pontos turísticos: %d\n", pontosturisticos1, pontosturisticos2);
    if (pontosturisticos1 == pontosturisticos2)
  {
    printf("Empate!\n");
  } else if (pontosturisticos1 > pontosturisticos2)
  {
    printf("Brasil venceu!\n");
  } else {
    printf("Argentina venceu!\n");
  }
    break;

  case 5:
    printf("Brasil - Densidade demográfica: %f h/km² - - Argentina - Densidade demográfica: %f h/km²\n", densidade1, densidade2);
    if (densidade1 == densidade2)
  {
    printf("Empate!\n");
  } else if (densidade2 > densidade1)
  {
    printf("Brasil venceu!\n");
  } else {
    printf("Argentina venceu!\n");
  }
    break;

  default:
    printf("Atributo inválido!\n");
    break;
  }
}