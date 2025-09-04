#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez - Nível Mestre

// Função recursiva para o movimento da Torre
void moverTorreRecursivo(int casas) {
    if (casas <= 0) { // Caso-base
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) { // Caso-base
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) { // Caso-base
        return;
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo
void moverCavaloComplexo() {
    printf("Movimento do Cavalo (2 casas para cima, 1 para a direita)\n");
    int passo;
    for (passo = 1; passo <= 3; passo++) {
        if (passo <= 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }
}


int main() {

    // Movimento da Torre (5 casas)
    printf("Movimento da Torre\n");
    moverTorreRecursivo(5);

    // Espaço
    printf("\n");

    // Movimento da Rainha (8 casas)
    printf("Movimento da Rainha\n");
    moverRainhaRecursivo(8);

    // Espaço
    printf("\n");

    // Movimento do Bispo (5 casas)
    printf("Movimento do Bispo\n");
    moverBispoRecursivo(5);

    // Espaço
    printf("\n");

    // Movimento do Cavalo
    moverCavaloComplexo();

    return 0;
}