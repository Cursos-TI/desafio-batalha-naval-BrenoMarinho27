#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Definindo o tamanho do tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com 0 (representando água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas e tamanho dos navios
    int xVertical = 2, yVertical = 3, tamanhoVertical = 4;
    int xHorizontal = 5, yHorizontal = 6, tamanhoHorizontal = 3;

    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < tamanhoVertical; i++) {
        tabuleiro[xVertical + i][yVertical] = 1;  // Marca a posição com '1' para o navio
    }

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < tamanhoHorizontal; i++) {
        tabuleiro[xHorizontal][yHorizontal + i] = 1;  // Marca a posição com '1' para o navio
    }

    // Exibindo as coordenadas do navio vertical
    printf("Posicionamento do navio vertical (coordenadas):\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        printf("(%d, %d)\n", xVertical + i, yVertical);
    }

    // Exibindo as coordenadas do navio horizontal
    printf("Posicionamento do navio horizontal (coordenadas):\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        printf("(%d, %d)\n", xHorizontal, yHorizontal + i);
    }

    // Exibindo o tabuleiro
    printf("\nTabuleiro de Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
