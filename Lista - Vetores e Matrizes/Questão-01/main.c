/*Ricardo viu um potencial em você depois de ver seus algoritmos da atividade passada, 
agora ele precisa calcular a "média funcional" da turma, que consiste na média das 
notas de todos os alunos que não foram reprovados, ou seja, aqueles que obtiveram 
nota  maior  que  4.  Para  isso,  considere  as  notas  dos  10  alunos  da  turma.  Faça  um 
algoritmo que o ajude nesse cálculo. */

#include <stdio.h>

int main() { 


    float notas_alunos[10];
    float notas_aprovados = 0; 
    int qnt_aprovados = 0;

    for(int i = 0; i<10 ; i++) {
        do{
        printf("Digite a nota %d :", i+1);
        scanf("%f", &notas_alunos[i]);
    }while (notas_alunos[i] < 0 || notas_alunos[i] > 10);
    
    };

    for(int i = 0; i<10 ; i++) {
        if(notas_alunos[i] > 4) {
            notas_aprovados += notas_alunos[i];
            qnt_aprovados++;        
        }
    };

    if( qnt_aprovados > 0){
    float media = notas_aprovados / qnt_aprovados;
    printf("A média funcional dos aprovados é : %.2f", media);
    } else
    printf("Nenhum aluno aprovado :( \n");
    return 0;
}