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

    printf("\n"); // Separador

    // Movimentação do Cavalo (2 casas para baixo e 1 para a esquerda)
    printf("Movimentação do Cavalo:\n");
    for (int cavalo_baixo = 0; cavalo_baixo < 2; cavalo_baixo++) {
        printf("Baixo\n");
        int cavalo_esquerda = 0;
        while (cavalo_esquerda < 1) {
            printf("Esquerda\n");
            cavalo_esquerda++;
        }
    }

    return 0;
}