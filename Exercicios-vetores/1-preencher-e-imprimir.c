// Crie um programa que leia 5 números inteiros e armazene em um vetor. Depois, imprima os números na ordem em que foram digitados.
#include <stdio.h>

int main(){
    int vetor[5], i;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 4; i++){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    for(i = 0; i <= 4; i++){
        printf("%dº número digitado: %d\n", i + 1, vetor[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}