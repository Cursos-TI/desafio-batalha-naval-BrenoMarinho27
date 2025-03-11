#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializando o tabuleiro com água (0)
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- Habilidade Cone ---
    // A origem do Cone será na posição (2, 4)
    int origemX = 2, origemY = 4;
    for (i = 0; i < 3; i++) { // Expande para baixo
        for (j = -i; j <= i; j++) { // Expande lateralmente
            if (origemX + i < LINHAS && origemX + i >= 0 && origemY + j < COLUNAS && origemY + j >= 0) {
                tabuleiro[origemX + i][origemY + j] = 3; // Marca área afetada pela habilidade cone
            }
        }
    }

    // --- Habilidade Cruz ---
    // A origem da Cruz será na posição (5, 6)
    origemX = 5;
    origemY = 6;
    for (i = -2; i <= 2; i++) { // Afeta verticalmente
        if (origemX + i < LINHAS && origemX + i >= 0) {
            tabuleiro[origemX + i][origemY] = 2; // Marca área vertical da cruz
        }
    }
    for (j = -2; j <= 2; j++) { // Afeta horizontalmente
        if (origemY + j < COLUNAS && origemY + j >= 0) {
            tabuleiro[origemX][origemY + j] = 2; // Marca área horizontal da cruz
        }
    }

    // --- Habilidade Octaedro ---
    // A origem do Octaedro será na posição (6, 1)
    origemX = 6;
    origemY = 1;

    // Para o octaedro, vamos controlar diretamente a "distância" da origem
    int dist;
    for (i = -2; i <= 2; i++) { // Afeta as linhas do losango
        if (i < 0) {
            dist = 2 + i; // Para valores negativos de i, a distância diminui
        } else {
            dist = 2 - i; // Para valores positivos de i, a distância diminui
        }

        for (j = -dist; j <= dist; j++) { // Afeta as colunas do losango
            if (origemX + i < LINHAS && origemX + i >= 0 && origemY + j < COLUNAS && origemY + j >= 0) {
                tabuleiro[origemX + i][origemY + j] = 1; // Marca área afetada pelo octaedro
            }
        }
    }

    // Exibindo o tabuleiro após a aplicação das habilidades
    printf("\nTabuleiro com Habilidades (Cone, Cruz, Octaedro):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%2d ", tabuleiro[i][j]); // Aumentando o espaçamento para visualização
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

