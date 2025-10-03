/*
Elize é dona de um restaurante e está enfrentando um problema com o termostato de
seu freezer, que possui apenas uma configuração em graus Celsius. No entanto, todo
o seu estoque de mantimentos está etiquetado com uma temperatura recomendada
em Fahrenheit, e fazer a conversão a cada vez que ela vai armazenar um novo item,
é bastante trabalhoso. Portanto, ela precisa de um algoritmo que, dada uma
temperatura em Fahrenheit, diga seu equivalente em Celsius. Para checar os valores,
ela também precisa que o mesmo algoritmo, dada uma temperatura em Celsius, diga
seu equivalente em Fahrenheit. Observe que a conversão de graus Fahrenheit para 5
Celsius é obtida por 𝐶 = (5/9)(𝐹 − 32). Deduza a fórmula de conversão de graus Celsius
para Fahrenheit.
*/
#include <stdio.h>

int main() {

    int escolha;
    float temperatura, resultado;
    do {
    printf("Escolha a conversao:\n");
    printf("1 - Fahrenheit para Celsius\n");
    printf("2 - Celsius para Fahrenheit\n");
    scanf("%d", &escolha);
    } while(escolha != 1 && escolha != 2);
    
    if(escolha == 1) {
    printf("Escreva a temperatura em Fahrenheit: \n");
    scanf("%f", &temperatura);
    resultado = (5.0/9.0) * (temperatura - 32);
    printf("Temperatura em Celsius: %.2f \n" , resultado);
    }
    
    if(escolha == 2) {
    printf("Escreva a temperatura em Celsius: \n");
    scanf("%f", &temperatura);
    resultado = (9.0/5.0) * temperatura + 32;
    printf("Temperatura em Fahrenheit: %.2f \n", resultado);
    } 
    
    return 0;
}