/*Augusto é estagiário em uma empresa de telecomunicações. 
Cada dia, ele recebe um vetor com n medidas inteiras que representam a força de um sinal em diferentes horários. 
Ele precisa transformar esse vetor original em um segundo vetor, que evidencie a tendência de variação do sinal,
e pediu que você fizesse um programa que imprimia os dois vetores.

A regra de transformação é a seguinte : 

- O primeiro valor do novo vetor é igual ao do vetor original;

- A partir do segundo valor, o novo vetor deve conter a soma entre o valor atual e o valor anterior,
ambos do vetor original.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite a medida n : ");
    scanf("%d", &n);
    int vetor_original[n];
    int novo_vetor[n];

    for(int i = 0; i<n; i++){
        printf("Digite o valor da posição %d : ", i);
        scanf("%d", &vetor_original[i]);
    }

    novo_vetor[0] = vetor_original[0];

    for(int i = 1; i<n; i++){
        novo_vetor[i] = vetor_original[i] + vetor_original[i-1];
    }
        
        for(int i = 0; i<n; i++){
        printf("%d \n", novo_vetor[i]);
    }

    return 0;
}