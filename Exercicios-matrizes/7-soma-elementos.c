// Leia os valores de uma matriz 2x2 e mostre a soma de todos os elementos.
#include <stdio.h>

int main(){
    int numeros[2][2], somaMatriz, i, row, column;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Conteúdo da matriz: \n");
    
    for(row = 0; row <= 1; row++){
        for(column = 0; column <= 1; column++){
            numeros[row][column] = 1;
            somaMatriz += numeros[row][column];
            printf("%d ", numeros[row][column]);
        }
        printf("\n");
    }    

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Soma do conteúdo: \n%d\n", somaMatriz);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}