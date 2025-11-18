/*Um aluno de Ciências da Computação da UECE está com dificuldade na cadeira de
Geometria Analítica e cansado de calcular o produto interno de dois vetores. Faça um
algoritmo que receba as coordenadas de dois vetores e calcule o produto interno, de
acordo com as anotações do aluno:

Se a = (a1, a2, a3) e b = (b1, b2, b3) são vetores tridimensionais, 
então o produto escalar entre a e b pode ser expresso como:

a . b = a1.b1 + a2.b2 + a3.b3
*/

#include <stdio.h> 

int main() {
    float a[3], b[3];
    float produto = 0.0f;
    
    for(int i = 0 ; i < 3 ; i++){
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%f", &a[i]); 
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%f", &b[i]); 
    }

    for(int i = 0; i < 3; i++){
        produto += a[i] * b[i];
    }

    printf("\nO produto escalar entre os vetores é: %.2f\n", produto);

    return 0;
}