#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(void)
{
    int houses = 1;

    // Tower
    printf("Torre movendo 5 casas para a direita\n");
    do 
    {
        printf("\tTorre movendo para a direita\n");
        houses++;
    } while (houses <= 5);

    printf("\n");
    houses = 1;

    // Bishop
    printf("Bispo movendo 5 casas para a diagonal direita\n");
    for (houses; houses <= 5; houses++)
    {
        printf("\tBispo movendo para a cima\n", houses);
        printf("\tBispo movendo para a direita\n", houses);
    }

    printf("\n");
    houses = 1;

    // Queen
    printf("Rainha movendo 8 casas para a esquerda\n");
    while (houses <= 8)
    {
        printf("\tRainha movendo para a esquerda\n");
        houses++;
    }

    return 0;
}