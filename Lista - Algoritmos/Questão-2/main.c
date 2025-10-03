/*Henrique conseguiu um novo emprego como desenvolvedor, que paga muito bem,
mas agora ele precisa pagar imposto de renda. Faça um algoritmo que leia o salário
dele e mostre o salário após a retirada do imposto de renda, com base na tabela
abaixo:
Até R$ 2.259,200 -> 0%
De R$ 2.259,20 até R$ 2.826,657-> 7% 
De R$2.826,65 até R$ 3.751,0515-> 15%
De R$ 3.751,06 até R$ 4.664,6822-> 22%
Acima de R$ 4.664,6827 -> 27% 
*/

#include <stdio.h> 

int main() {
    float salario, desconto;

    scanf("%f", &salario);

    if (salario <= 2259.2) {
        printf("Isento de imposto de renda :)\n");
        desconto = 0;
    }
    else if (salario <= 2826.657) {
        printf("Salário com 7%% de desconto: ");
        desconto = salario * 0.07;
    }
    else if (salario <= 3751.0515) {
        printf("Salário com 15%% de desconto: ");
        desconto = salario * 0.15;
    }
    else if (salario <= 4664.6822) {
        printf("Salário com 22%% de desconto: ");
        desconto = salario * 0.22;
    }
    else {
        printf("Salário com 27%% de desconto: ");
        desconto = salario * 0.27;
    }
    
    printf("%2.f\n", salario - desconto);
    return 0;
}