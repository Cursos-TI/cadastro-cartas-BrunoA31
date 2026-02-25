#include <stdio.h>

// Desafio Super Trunfo - Países
//Tema 3 - Nível Mestre

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
    int escolhaJogador1, escolhaJogador2;
    int resultado1, resultado2;

    //Menu interativo utilizando o switch para escolha do primeiro atributo - Tema 3: Nível Mestre
    printf("Esolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Primeiro Atributo: ");
    scanf("%d", &escolhaJogador1);

    switch (escolhaJogador1)
    {
    case 1:
      printf("Você escolheu o atributo População!\n");
      printf("Brasil - População: %d - - Argentina - População: %d\n", populacao1, populacao2);
      resultado1 = populacao1 > populacao2 ? 1 : 0 ;
      break;
    case 2:
      printf("Você escolheu o atributo Área!\n");
      printf("Brasil - Área: %f km²- - Argentina - Área: %f km²\n", area1, area2);
      resultado1 = area1 > area2 ? 1 : 0 ;
      break;
    case 3:
      printf("Você escolheu o atributo PIB!\n");
      printf("Brasil - PIB: %f (bilhões de dólares) - - Argentina - PIB: %f (bilhões de dólares)\n", pib1, pib2);
      resultado1 = pib1 > pib2 ? 1 : 0 ;
      break;
    case 4:
      printf("Você escolheu o atributo Número de pontos turísticos!\n");
      printf("Brasil - Pontos turísticos: %d - - Argentina - Pontos turísticos: %d\n", pontosturisticos1, pontosturisticos2);
      resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0 ;
      break;
    case 5:
      printf("Você escolheu o atributo Densidade demográfica!\n");
      printf("Brasil - Densidade demográfica: %f h/km² - - Argentina - Densidade demográfica: %f h/km²\n", densidade1, densidade2);
      resultado1 = densidade2 > densidade1? 1 : 0 ;
      break;
    default:
      printf("Atributo inválido!\n");
      break;
    }

    //Menu interativo utilizando o switch para escolha do primeiro atributo - Tema 3: Nível Mestre
    printf("\n");
    printf("Esolha o segundo atributo:\n");
    printf("ATENÇÃO!! Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Segundo Atributo: ");
    scanf("%d", &escolhaJogador2);

    if (escolhaJogador1 == escolhaJogador2)
    {
      printf("Você escolheu o mesmo atributo do primeiro!\n");
    } else {
      switch (escolhaJogador2)
      {
      case 1:
        printf("Você escolheu o atributo População!\n");
        printf("Brasil - População: %d - - Argentina - População: %d\n", populacao1, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0 ;
        break;
      case 2:
        printf("Você escolheu o atributo Área!\n");
        printf("Brasil - Área: %f km²- - Argentina - Área: %f km²\n", area1, area2);
        resultado2 = area1 > area2 ? 1 : 0 ;
        break;
      case 3:
        printf("Você escolheu o atributo PIB!\n");
        printf("Brasil - PIB: %f (bilhões de dólares) - - Argentina - PIB: %f (bilhões de dólares)\n", pib1, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0 ;
      break;
      case 4:
        printf("Você escolheu o atributo Número de pontos turísticos!\n");
        printf("Brasil - Pontos turísticos: %d - - Argentina - Pontos turísticos: %d\n", pontosturisticos1, pontosturisticos2);
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0 ;
        break;
      case 5:
        printf("Você escolheu o atributo Densidade demográfica!\n");
        printf("Brasil - Densidade demográfica: %f h/km² - - Argentina - Densidade demográfica: %f h/km²\n", densidade1, densidade2);
        resultado2 = densidade2 > densidade1? 1 : 0 ;
        break;
      default:
        printf("Atributo inválido!\n");
        break;
      }
      printf("\n");
      
      //Resultado da combinação dos dois atributos comparados
      if (resultado1 && resultado2)
      {
        printf("Parabéns! Você venceu!\n\n");
      } else if (resultado1 != resultado2)
      {
       printf("Você empatou!\n\n");
     } else {
        printf("Você perdeu!\n\n");
      }
    }
    

}