#include <stdio.h>

// Funções recursivas para movimentação das peças
void moveBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moveBispo(casas - 1);
    }
}

void moveTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moveTorre(casas - 1);
    }
}

void moveRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moveRainha(casas - 1);
    }
}

int main() {
    // Movimentação do Bispo (recursiva)
    printf("Movimentação do Bispo:\n");
    moveBispo(5);

    printf("\n"); // Separador

    // Movimentação da Torre (recursiva)
    printf("Movimentação da Torre:\n");
    moveTorre(5);

    printf("\n"); // Separador

    // Movimentação da Rainha (recursiva)
    printf("Movimentação da Rainha:\n");
    moveRainha(8);

    printf("\n"); // Separador

    // Movimentação do Cavalo (loops com variáveis e condições múltiplas)
    printf("Movimentação do Cavalo:\n");
    for (int i = 0, j = 0; i < 2; i++) {
        printf("Baixo\n");
        for (; j < 1; j++) {
            printf("Direita\n");
            break; // Sai do loop interno após uma iteração
        }
    }

    return 0;
}