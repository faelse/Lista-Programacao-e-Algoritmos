/*1. Laura está criando um programa para um projeto de pesquisa sobre o envelhecimento
humano e precisa de ajuda.
a. Desenvolva um algoritmo que calcule a idade de uma pessoa de acordo com
sua data de nascimento.
Ex: Fulano nasceu 15 de agosto de 1999
Fulano tem 25 anos
b. Na verdade, ela precisa de um algoritmo que converta a data de nascimento,
fornecida em anos, meses e dias, para o formato de dias. Não se preocupe
com ano bissextos e considere que todos os meses têm 30 dias.
Ex: Fulano nasceu 15 de agosto de 1999
Fulano tem 9380 dias de vida.*/



#include <stdio.h>
#include <time.h>

int main() {

    // ITEM A: Calcular idade em anos

    int ano_nascimento, mes_nascimento, dia_nascimento, idade;
    
    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);
    
    int ano_atual = data_atual->tm_year + 1900;
    int mes_atual = data_atual->tm_mon + 1;
    int dia_atual = data_atual->tm_mday;

    do {
    printf("Digite ano (1899 - %d): ", ano_atual);
    scanf("%d", &ano_nascimento);
    } while (ano_nascimento < 1899 || ano_nascimento > ano_atual);

    do {
    printf("Digite mês (1-12): ");
    scanf("%d", &mes_nascimento);
    } while (mes_nascimento < 1 || mes_nascimento > 12);

    do {
        printf("Digite dia (1-30): ");
        scanf("%d", &dia_nascimento);
    } while (dia_nascimento < 1 || dia_nascimento > 30);

    idade = ano_atual - ano_nascimento;

    if (mes_nascimento > mes_atual || 
        (mes_nascimento == mes_atual && dia_nascimento > dia_atual)) {
        idade -= 1;
    }

    printf("Idade: %d anos\n", idade);

    /*ITEM B: Converter para dias -> 
    Como cada mês tem 30 dias, o ano tem 360 dias*/
    
    int total_dias_nascimento = (ano_nascimento * 360) + (mes_nascimento * 30) + dia_nascimento;
    int total_dias_atual = (ano_atual * 360) + (mes_atual * 30) + dia_atual;

    int idade_em_dias = total_dias_atual - total_dias_nascimento;

    printf("Idade em dias: %d dias\n", idade_em_dias);

    return 0;
}