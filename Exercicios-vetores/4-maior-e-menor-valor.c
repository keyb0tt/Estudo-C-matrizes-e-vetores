// Crie um programa que leia 7 números e mostre qual é o maior e qual é o menor número armazenado.
#include <stdio.h>

int main(){
    int vetor[7], i, maiorN, menorN;
    
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    
    for(i = 0; i <= 6; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maiorN = vetor[0];
    menorN = vetor[0];
    
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    printf("Valores do vetor: ");

    for(i = 0; i <= 6; i++){
        printf("%d ", vetor[i]);
        if(vetor[i] > maiorN){
            maiorN = vetor[i];
        }
        if(vetor[i] < menorN){
            menorN = vetor[i];
        }
    }
    
    printf("\n<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    
    printf("Maior valor: %d\nMenor valor: %d", maiorN, menorN);
    
    printf("\n<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}