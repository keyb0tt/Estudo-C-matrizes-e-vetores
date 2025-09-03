// Leia 10 números e armazene em um vetor. Em seguida, exiba os números na ordem inversa da que foram digitados.
#include <stdio.h>

int main(){
    int vetor[10], i;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 9; i++){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 9; i >= 0; i--){
        printf("O %dº número digitado foi: %d\n", i + 1, vetor[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}