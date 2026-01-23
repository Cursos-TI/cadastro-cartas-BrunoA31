#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1, carta2;
  char estado1, estado2;
  char cod1[4], cod2[4];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  

  // Área para entrada de dados
  printf("Digite o número da carta (De 1 a 2): ");
  scanf("%d", &carta1);

  printf("Digite o Estado da carta (De A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
  scanf("%s", cod1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o valor do Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &pontos1);



  printf("Digite o número da carta (De 1 a 2): ");
  scanf("%d", &carta2);

  printf("Digite o Estado da carta (De A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
  scanf("%s", cod2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o valor do Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("Carta %d: \n", carta1);
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", cod1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %f km² \n", area1);
  printf("PIB: %f bilhões de reais \n", pib1);
  printf("Números de Pontos Turísticos: %d \n", pontos1);
  printf("\n");

  printf("Carta %d: \n", carta2);
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", cod2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %f km² \n", area2);
  printf("PIB: %f bilhões de reais \n", pib2);
  printf("Números de Pontos Turísticos: %d \n", pontos2);

return 0;
} 
