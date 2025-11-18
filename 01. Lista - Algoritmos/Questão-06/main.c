/*
Maria quer revisar um pouco de matemática básica e praticar programação, então ela
decidiu fazer os dois ao mesmo tempo. Ela precisa de um algoritmo que, lendo os 3
coeficientes 𝑎, 𝑏 e 𝑐, determine, com base no delta (𝑏² − 4𝑎𝑐), o seguinte:

● Caso o delta seja maior que 0: Informe que existem duas raízes −𝑏±√𝑑𝑒𝑙𝑡𝑎/2𝑎 reais
e diferentes e apresente apenas as raízes reais positivas da equação;

● Caso o delta seja igual a 0: Informe que existe uma raiz real repetida e
apresente qual é essa raiz;

● Caso o delta seja menor que 0: Informe que não existem raízes reais para
aquela equação.

->  a não pode ser 0
->  delta < 0 
->  tratar somente raízes reais positivas 

*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    double raiz, raiz1, raiz2; 

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Não é possível fazer a equação, pois a = 0.\n");
        return 0; 
    }

    delta = (b * b) - 4 * a * c;

    if(delta < 0 ) {
        printf("Não existem raízes reais para essa equação.\n");
    }
    else if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        if (raiz1 > 0 && raiz2 > 0) {
            printf("Existem 2 raizes reais e diferentes:\n%.6lf\n%.6lf\n", raiz1, raiz2);
        } 
        else if (raiz1 > 0 && raiz2 <= 0) {
            printf("Apenas raiz 1 é real e positiva: %.6lf\n", raiz1);
        } 
        else if (raiz2 > 0 && raiz1 <= 0) {
            printf("Apenas raiz 2 é real e positiva: %.6lf\n", raiz2);
        } 
        else {
            printf("Não existem raízes reais positivas.\n");
        }
    } 
    else { 
        raiz = -b / (2 * a);   
        if (raiz > 0) {
            printf("Existe uma raiz real repetida e positiva: %.6lf\n", raiz);
        } else {
            printf("Não existem raízes reais positivas.\n");
        }
    }

    return 0;
}
