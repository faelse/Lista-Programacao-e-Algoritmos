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

    int birth_year, birth_month, birth_day, age;
    
    time_t now = time(NULL);
    struct tm *current_date = localtime(&now);
    
    int current_year = current_date->tm_year + 1900;
    int current_month = current_date->tm_mon + 1;
    int current_day = current_date->tm_mday;

    do {
    printf("Digite ano (1899 - %d): ", current_year);
    scanf("%d", &birth_year);
    } while (birth_year < 1899 || birth_year > current_year);

    do {
    printf("Digite mês (1-12): ");
    scanf("%d", &birth_month);
    } while (birth_month < 1 || birth_month > 12);

    do {
        printf("Digite dia (1-30): ");
        scanf("%d", &birth_day);
    } while (birth_day < 1 || birth_day > 30);

    age = current_year - birth_year;

    if (birth_month > current_month || 
        (birth_month == current_month && birth_day > current_day)) {
        age -= 1;
    }

    printf("Idade: %d anos\n", age);

    /*ITEM B: Converter para dias -> c
    Como cada mês tem 30 dias, o ano tem 360 dias*/
    
    int birth_total_days = (birth_year * 360) + (birth_month * 30) + birth_day;
    int current_total_days = (current_year * 360) + (current_month * 30) + current_day;

    int age_days = current_total_days - birth_total_days;

    printf("Idade em dias: %d dias\n", age_days);

    return 0;
}