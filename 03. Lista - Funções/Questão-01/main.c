/*
O IMPA (Instituto de Matemática Pura e Aplicada) solicitou que você desenvolva uma função 
para ser integrada a um programa existente. 
* Esta nova função deve calcular a área de um triângulo com base e altura como argumentos.
Além disso, crie um pequeno programa para 
testar a função que você criou. */
#include <stdio.h>

int area_triangulo(int a, int b) {
    
    int resultado = (a*b) / 2;

    return resultado;
}

int main() {
    int a,b ;
    printf("Digite a base : ");
    scanf("%d", &a);
    printf("Digite a altura : ");
    scanf("%d", &b);

    printf("%d", area_triangulo(a , b));

    return 0;
}