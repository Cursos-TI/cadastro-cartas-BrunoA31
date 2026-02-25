#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char opcao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Você deve escolher um número e um tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Esolha a comparação: ");
    scanf(" %c", &opcao);

    printf("Escolha o seu número: ");
    scanf("%d", &numeroJogador);

    printf("O número do computador é: %d\n", numeroComputador);
    
    switch (opcao)
    {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroComputador ? 1 : 0;

        break;
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;    
    default:
        printf("Opção inválida!\n");
        break;
    }
    if (resultado == 1)
    {
        printf("Você venceu!\n");
    }
    else{
        printf("Você perdeu!\n");    }
    
    }


