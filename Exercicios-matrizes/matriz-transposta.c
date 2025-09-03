// // Leia uma matriz 3x2 e exiba sua transposta (a linha vira coluna e a coluna vira linha).
// #include <stdio.h>

// int main(){
//     int matriz[3][2], row, column, i, j;

//     printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

//     for(row = 0; row <= 2; row++){
//         for(column = 0; column <= 1; column++){
//             printf("Insira o valor da %dª linha, %dª coluna: ", row + 1, column + 1);
//             scanf("%d", &matriz[row][column]);
//         }
//     }

//     printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
//     printf("Conteúdo da matriz: \n");

//     for(row = 0; row <= 2; row++){
//         for(column = 0; column <= 1; column++){
//             printf("%d ", matriz[row][column]);
//         }
//         printf("\n");
//     }

//     printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

//     return 0;
// }