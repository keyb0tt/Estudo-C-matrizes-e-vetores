// Leia 8 números inteiros, armazene em um vetor e calcule a soma de todos os elementos.
#include <stdio.h>

int main(){
    int vetor[8], i, somaVetor;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    for(i = 0; i <= 7; i++){
        printf("Insira o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    printf("Valores do vetor: \n");
    for(i = 0; i <= 7; i++){
        printf("%d ", vetor[i]);
        somaVetor += vetor[i];
    }

    printf("\n<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Soma dos valores: \n %d", somaVetor);
    printf("\n<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    return 0;
}