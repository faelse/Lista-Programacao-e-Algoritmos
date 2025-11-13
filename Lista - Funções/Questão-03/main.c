/*
Vitória estava jogando um jogo em seu celular e gostaria de saber a pontuação total de todas 
as partidas já jogadas. Ela pediu que você criasse uma função que, ao receber dois números (𝑛1 
e 𝑛2), calcule a soma de todos os números no intervalo entre 𝑛1 e 𝑛2 (ambos inclusos) e retorne 
essa soma. Em seguida, crie um pequeno programa utilizando essa função para testá-la.
*/

#include <stdio.h>

int soma( int n1, int n2) {
    int soma = 0;
    int maior, menor ;
    if(n1 < n2) {
        menor = n1;
        maior = n2;
    }else {
        maior = n1;
        menor = n2;
    }
    for(int i = menor; i <= maior; i++){
        soma += i;
    }
    return soma;
}

int main() {
    int n1, n2;
    printf("Digite n1 : ");
    scanf("%d", &n1);
    printf("Digite n2 : ");
    scanf("%d", &n2);
    
    printf("Pontuação Total : %d", soma(n1, n2));

    return 0;
}