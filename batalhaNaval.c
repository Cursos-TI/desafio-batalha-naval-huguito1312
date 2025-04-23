#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal na linha 2 (índice 1), colunas B, C, D (índices 1, 2, 3)
    int linha_horizontal = 1;
    for (int j = 1; j <= 3; j++) {
        tabuleiro[linha_horizontal][j] = 3;
    }

    // Posiciona navio vertical na coluna J (índice 9), linhas 8, 9, 10 (índices 7, 8, 9)
    int coluna_vertical = 9;
    for (int i = 7; i <= 9; i++) {
        tabuleiro[i][coluna_vertical] = 3;
    }

    printf("          BATALHA NAVAL\n");

    // Imprime cabeçalho das colunas (A até J)
    printf("   ");
    for (char col = 'A'; col <= 'J'; col++) {
        printf(" %c ", col);
    }
    printf("\n");

    // Imprime o tabuleiro com as linhas numeradas
    for (int linha = 0; linha < 10; linha++) {
        printf("%2d ", linha + 1); // %2d alinhas os números de 1 a 9 com o 10
        for (int col = 0; col < 10; col++) {
            printf(" %d ", tabuleiro[linha][col]);
        }
        printf("\n");
    }

    


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
