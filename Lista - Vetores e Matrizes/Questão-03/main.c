/*Ricardo precisa de ajuda em outra funcionalidade: o cálculo da ”média perfeita” da 
turma. A média perfeita é a média aritmética simples das notas da turma, mas caso o 
resultado final seja maior que 8, ela será igual a 10. Para isso, considere as notas dos 
15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que 
resolva esse problema.
*/

#include <stdio.h>

int main() {
    float notas_alunos[15];
    float media;
    float notas = 0.0f;
    
    for(int i = 0; i<15 ; i++) {
        do{
            printf("Digite a nota %d : ", i+1);
            scanf("%f", &notas_alunos[i]);
        }while(notas_alunos[i] < 0 || notas_alunos[i] > 10);
        notas += notas_alunos[i];
    }
    media = notas / 15;

    if(media > 8){
    printf("Média real da turma : %.2f \n", media);
       media = 10; 
       printf("Média perfeita! : %.2f", media);
    }else
    printf("Média da turma : %.2f", media);

    
    

    return 0;
}