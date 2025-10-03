/*
Depois de um longo dia dando aulas, Ricardo precisa de sua ajuda para calcular as
médias finais de seus alunos. Sabendo que a média final é calculada pela fórmula
abaixo, construa um algoritmo que, dadas as notas, calcule a nota final. NF (nota final),
Av1 (avaliação 1), Tb1 (trabalho 1) e Tb2 (trabalho 2).
𝑁𝐹 =
𝐴𝑣1 + ((𝑇𝑏1 + 𝑇𝑏2)/2) / 2
*/
#include <stdio.h>

int main() {
    float Av1, Tb1, Tb2, NF, media_trabalhos;

     do {
    printf("Digite a nota da Av1 : ");
    scanf("%f", &Av1);
    } while (Av1 < 0 || Av1 > 10);
    
    do {
    printf("Digite a nota da Tb1 : ");
    scanf("%f", &Tb1);
    } while (Tb1 < 0 || Tb1 > 10);
   
    do {
    printf("Digite a nota da Tb2 : ");
    scanf("%f", &Tb2);
    } while (Tb2 < 0 || Tb2 > 10);

    media_trabalhos = (Tb1 + Tb2) / 2;

    NF = (Av1 + media_trabalhos) / 2; 

    printf("Nota final: %.2f\n", NF);

    return 0;
}
