// Crie uma matriz 3x3 e preencha-a como uma matriz identidade (1 na diagonal principal e 0 nos demais elementos). Em seguida, exiba-a.
#include <stdio.h>

int main(){
    int matriz[3][3], row, column, i, x;

    for(i = 0; i <= 2; i++){
        matriz[i][0] = 1;
        for(x = 1; x <= 2; x++){
            matriz[i][x] = 0;
        }
    }
    
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    for(row = 0; row <= 2; row++){
        for(column = 0; column <= 2; column++){
            printf("%d ", matriz[row][column]);
        }
        printf("\n");
    }
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}
