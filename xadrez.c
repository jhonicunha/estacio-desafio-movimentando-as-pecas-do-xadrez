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

    // Espaço
    printf("\n");

    // Movimento do Cavalo (loops aninhados)
    printf("Movimento do Cavalo (2 casas para baixo, 1 para a esquerda)\n");
    int i_cavalo;
    for (i_cavalo = 0; i_cavalo < 2; i_cavalo++) {
        if (i_cavalo == 0) {
            int j_cavalo = 0;
            while (j_cavalo < 2) {
                printf("Baixo\n");
                j_cavalo++;
            }
        }
        else {
            printf("Esquerda\n");
        }
    }
    return 0;
}