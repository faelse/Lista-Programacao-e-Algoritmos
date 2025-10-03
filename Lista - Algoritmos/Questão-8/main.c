/*Em uma partida de RPG, o mestre está determinando o resultado de uma batalha
para um jogador usando um dado. Escreva um algoritmo que receba um número
inteiro como entrada e, com base nesse número, determine se o jogador ganhou ou
perdeu a batalha. Se o número for par, o jogador vence; se for ímpar, o jogador perde.
*/
#include  <stdio.h>
int main() {
    
    int num, vitoria = 0;

    scanf("%d", &num);

    if(num <= 0) {
        printf("Valor inválido. \n");
        return 0;
    }

     else if(num % 2 == 0 ) {
        vitoria = 1;
    };

    if(vitoria == 1) {
        printf("Parabens, você ganhou :) \n");
    }else{
        printf("Você perdeu. \n");
    }
    

    return 0;
}