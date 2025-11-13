/*
Joaquim precisa de ajuda para estudar para a prova de M.D. Um dos tópicos que ele não 
compreende bem é o de arranjos. Ele solicitou que você criasse uma função que calcule o 
número de arranjos de '𝑛' elementos tomados ' 𝑝 ' a ' 𝑝 ', levando em consideração que a fórmula 
de arranjo é: 

* n!/(n-p)!

*/

#include <stdio.h>

int fatorial(int x) {
    int resultado = 1;
    for(int i = 1; i<= x; i++){
        resultado *= i;
    }
    return resultado;
}

long long arranjo(int n, int p){
    long long resultado = (long long) fatorial(n) / (long long) fatorial(n - p);
    return resultado;
}

int main(){
    int n,p;

    printf("Digite o n : ");
    scanf("%d", &n);
    printf("Digite o p : ");
    scanf("%d", &p);
    if (p > n) {
    printf("Erro: p nao pode ser maior que n.\n");
    return 1;
    }

    printf("A(%d,%d) = %lld",n, p, arranjo(n, p));

    return 0;
}