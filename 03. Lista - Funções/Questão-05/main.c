/*
Utilizando a mesma função já criada, Maria também solicitou que você determine a soma 
apenas dos números primos no intervalo de 1 a 1000.
*/

#include <stdio.h> 

int checar_primo(int x) {
    int count = 0;
    if(x == 1 || x == 2){
        return 0;
    };

    for( int i = 1 ; i <= x; i++){
        if(x % i == 0){
            count++;
        }
    }
    if(count == 2) {
        return 0;
    }
    return 1;
}

void somar_intervalo(int x, int y){
    int menor, maior, soma = 0;

     if (x < y) {
        menor = x;
        maior = y;
    } else if (y < x) {
        menor = y; 
        maior = x;
    } else {
        printf("Os dois valores são iguais.");
        return;
    }

    for(int i = menor; i <= maior; i++){
        if(checar_primo(i) == 0){
        soma += i;
        }
    }
    printf("%d", soma);
}

int main() {
    int a, b;
    printf("Digite o valor a : ");
    scanf("%d",&a);
    printf("Digite o valor b : ");
    scanf("%d", &b);
    somar_intervalo(a, b);
    return 0;
}