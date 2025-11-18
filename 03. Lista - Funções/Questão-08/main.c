/*
Agora, ele precisa de uma função que calcule o número de combinações. A fórmula de 
combinação de '𝑛' elementos tomados '𝑝' a '𝑝' é: 

* C(p,n) = n! / p!(n-p)!
*/

#include <stdio.h>

int fatorial(int x){
    int resultado = 1;
    for(int i = 1; i <= x; i++){
        resultado *= i;
    }
    return resultado;
}

long long combinacao(int n, int p){
    long long resultado = 
    (long long) fatorial(n) / 
    ((long long) fatorial(p) * (long long) fatorial(n - p));
    return resultado;
}

int main() {
    int n, p;
    printf("Digite o valor de n : ");
    scanf("%d", &n);
    printf("Digite o valor de p : ");
    scanf("%d", &p);

    if (p > n) {
    printf("Erro: p nao pode ser maior que n.\n");
    return 1;
    }

    printf("C(%d,%d) = %lld", n, p, combinacao(n,p));

    return 0;
}