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
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  float densidade1, densidade2;
  float pibpc1, pibpc2;
  float sp1, sp2;
  int compPopulacao, compArea, compPib, compPontos, compDensidade, compPibpc, compSp;

  // Área para entrada de dados
  //Carta 1
  printf("Digite o número da carta (De 1 a 2): ");
  scanf("%d", &carta1);

  printf("Digite o Estado da carta (De A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
  scanf("%s", cod1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o valor do Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &pontos1);

  densidade1 = (double)populacao1/(double)area1;
  pibpc1 = (float)(pib1*1000000000)/populacao1;
  sp1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibpc1 + 1.0/densidade1;
  printf("\n");


  //Carta 2
  printf("Digite o número da carta (De 1 a 2): ");
  scanf("%d", &carta2);

  printf("Digite o Estado da carta (De A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
  scanf("%s", cod2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o valor do Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &pontos2);

  densidade2 = (double)populacao2/(double)area2;
  pibpc2 = (float)(pib2*1000000000)/populacao2;
  sp2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibpc2 + 1.0/densidade2;
  printf("\n");

  // Área para exibição dos dados da cidade
  //Carta 1
  printf("Carta %d: \n", carta1);
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", cod1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %lu \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Números de Pontos Turísticos: %d \n", pontos1);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", pibpc1);
  printf("Super Poder: %.2f \n", sp1);
  printf("\n");

  //Carta 2
  printf("Carta %d: \n", carta2);
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", cod2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %lu \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Números de Pontos Turísticos: %d \n", pontos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", pibpc2);
  printf("Super Poder: %.2f \n", sp2);
  printf("\n");

  //Comparação das duas cartas
  compPopulacao = populacao1 > populacao2;
  compArea = area1 > area2;
  compPontos = pontos1 > pontos2;
  compPib = pib1 > pib2;
  compDensidade = densidade1 < densidade2;
  compPibpc = pibpc1 > pibpc2;
  compSp = sp1 > sp2;

  // Área para exibição das comparações
  printf("Comparação das cartas: \n");
  printf("População: Carta %d venceu (%d)\n", 1+(1-compPopulacao), compPopulacao);
  printf("Área: Carta %d venceu (%d)\n", 1+(1-compArea), compArea);
  printf("PIB: Carta %d venceu (%d)\n",  1+(1-compPib), compPib);
  printf("Pontos: Carta %d venceu (%d)\n",  1+(1-compPontos), compPontos);
  printf("Densidade: Carta %d venceu (%d)\n",  1+(1-compDensidade), compDensidade);
  printf("PIB per capta: Carta %d venceu (%d)\n",  1+(1-compPibpc), compPibpc);
  printf("Super Poder: Carta %d venceu (%d)\n",  1+(1-compSp), compSp);
  printf("\n");  

return 0;
} 
