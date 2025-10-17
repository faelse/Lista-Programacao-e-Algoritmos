/*Samara foi contratada por uma usina para monitorar o consumo diário de energia de uma instalação. 
A cada dia, ela recebe um relatório com n leituras inteiras que representam a quantidade de energia consumida
naquele dia, organizadas em uma lista.
Para avaliar as oscilações de consumo, Samara precisa de uma segunda lista que contenha a variação percentual inteira
de um dia para o outro.  Ela gostaria que você fizesse um programa que, ao receber uma lista de valores inteiros, 
gere uma outra lista com as variações percentuais. 
Exemplo : 
[100 110 105 115 ...] -> [0 10 -5 10 ...]*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite a quantidade de elementos que sua lista terá : ");
    scanf("%d", &n);
    int lista[n], segunda_lista[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite a variação do dia %d : ", i+1);
        scanf("%d", &lista[i]);        
    }
    
    for (int i = 0; i < n; i++)
    {   
        segunda_lista[i] = lista[i] - lista[i-1];

        if(i == 0){
            segunda_lista[i] = 0;
        }
    }
     
    
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", segunda_lista[i]);
    }
    return 0;
}