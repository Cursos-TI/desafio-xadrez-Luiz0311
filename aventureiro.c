#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(void)
{
    // Horse
    printf("Cavalo se movendo para baixo esquerda\n");
    for (int houses = 0; houses < 1; houses++)
    {
        for (int i = 0; i <= 1; i++) 
        {
            printf("\tCavalo movendo para baixo\n");
        }
        printf("\tCavalo movendo para esquerda\n");
    }

    return 0;
}