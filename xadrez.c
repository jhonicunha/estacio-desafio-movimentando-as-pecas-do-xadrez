#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez - Nível Novato

int main() {
    
    // Movimento da Torre (for)
    printf("Movimento da Torre (5 casas para a direita)\n");
    int i_torre;
    for (i_torre = 0; i_torre < 5; i_torre++) {
        printf("Direita\n");
    }

    // Espaço
    printf("\n");

    // Movimento da Rainha (while)
    printf("Movimento da Rainha (8 casas para a esquerda)\n");
    int casas_rainha = 0;
    while (casas_rainha < 8) {
        printf("Esquerda\n");
        casas_rainha++; 
    }

    // Espaço
    printf("\n");

    // Movimento do Bispo (do-while)
    printf("Movimento do Bispo (5 casas na diagonal)\n");
    int movimentos_bispo = 0;
    do {
        printf("Cima, Direita\n");
        movimentos_bispo++;
    } while (movimentos_bispo < 5);

    return 0;
}