// Leia 15 números e armazene em um vetor. Depois, mostre quantos são pares e quantos são ímpares.
#include <stdio.h>

int main(){
    int numeros[15], qntPares, qntImpares, i;
    qntPares = 0, qntImpares = 0;

    printf("\n<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 14; i++){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 14; i++){
        if(numeros[i] % 2 == 0){
            qntPares++;
        } else {
            qntImpares++;
        }
    }

    printf("Quantidade de números pares: %d\n", qntPares);
    printf("Quantidade de números ímpares: %d\n", qntImpares);

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}