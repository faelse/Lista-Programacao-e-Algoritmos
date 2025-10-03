/*
Ricardo  ficou  contente  com  o  resultado,  mas  ele  percebeu  um  erro.  Em  um  dia 
cansativo, ele, com muito sono, colocou 1000 na nota de um aluno, mas a prova só 
vale 10 pontos. Faça um algoritmo que leia apenas notas entre 0 e 10, para finalmente 
calcular a média funcional.*/

// Já fiz no código passado 8)

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