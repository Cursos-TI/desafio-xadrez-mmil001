#include <stdio.h>

// Constantes para definir os limites de movimento
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima Direita\n");
    }

    printf("\n"); // Separador

    // Movimentação da Torre (direita)
    printf("Movimentação da Torre:\n");
    int j = 0;
    while (j < MOVIMENTO_TORRE) {
        printf("Direita\n");
        j++;
    }

    printf("\n"); // Separador

    // Movimentação da Rainha (esquerda)
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);

    return 0;
}