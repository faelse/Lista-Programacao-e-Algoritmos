#include <stdio.h> 

int main() {
    double nota1, nota2, nota3;

    printf("Nota 1 :");
    scanf("%lf", &nota1);
    printf("Nota 2 :");
    scanf("%lf", &nota2);
    printf("Nota 3 :");
    scanf("%lf", &nota3);

    double maior = nota1;
    if(maior < nota2){
        maior = nota2;
    };
    if(maior < nota3) {
        maior = nota3;
    };

    double menor = nota1;
    if(menor > nota2) {
        menor = nota2;
    };
    if(menor > nota3) {
        menor = nota3;
    };
    
    printf("Maior nota: %lf\n", maior);
    printf("Menor nota: %lf\n", menor);
    printf("Media das notas: %lf\n", (nota1 + nota2 + nota3)/3);

    return 0;
}
