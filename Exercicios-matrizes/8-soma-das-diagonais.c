// Leia uma matriz 3x3 e calcule a soma da diagonal principal e da diagonal secundária.
#include <stdio.h>

int main(){
    int numeros[3][3], row, column, i, j, somaDiag1, somaDiag2;

    j = 2; i = 1;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Conteúdo da matriz: \n");
    for(row = 0; row <= 2; row++){
        for(column = 0; column <= 2; column++){
            numeros[row][column] = 2;
            printf("%d ", numeros[row][column]);
        }
        printf("\n");
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 2; i++){
        somaDiag1 += numeros[i][i];
    }

    for(i = 0; i <= 2; i++){
        somaDiag2 += numeros[i][j];
        j--;
    }

    printf("Soma da diagonal principal: %d\nSoma da diagonal secundária: %d\nTotal: %d\n", somaDiag1, somaDiag2, somaDiag1 + somaDiag2);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    

    return 0;
}