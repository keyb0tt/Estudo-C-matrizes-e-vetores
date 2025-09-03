#include <stdio.h>

void matrizTransposta(int rowSize, int columnSize) {
    int matriz[rowSize][columnSize];
    int transposta[columnSize][rowSize];
    int row, column;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    // PREENCHENDO A MATRIZ
    for (row = 0; row < rowSize; row++) {
        for (column = 0; column < columnSize; column++) {
            printf("Insira o valor em [%d][%d]: ", row + 1, column + 1);
            scanf("%d", &matriz[row][column]);
        }
    }

    // CALCULANDO A TRANSPOSTA
    for (row = 0; row < rowSize; row++) {
        for (column = 0; column < columnSize; column++) {
            transposta[column][row] = matriz[row][column];
        }
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>");
    // IMPRIMINDO MATRIZ ORIGINAL
    printf("\nMatriz Original (%dx%d):\n", rowSize, columnSize);
    for (row = 0; row < rowSize; row++) {
        for (column = 0; column < columnSize; column++) {
            printf("%d\t", matriz[row][column]);
        }
        printf("\n");
    }
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>");
    // IMPRIMINDO TRANSPOSTA
    printf("\nMatriz Transposta (%dx%d):\n", columnSize, rowSize);
    for (row = 0; row < columnSize; row++) {
        for (column = 0; column < rowSize; column++) {
            printf("%d\t", transposta[row][column]);
        }
        printf("\n");
    }
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
}

int main() {
    matrizTransposta(3, 2); // matriz 3x2
    return 0;
}
