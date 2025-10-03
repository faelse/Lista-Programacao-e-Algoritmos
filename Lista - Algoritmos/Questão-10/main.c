/*Imagine que você está organizando um encontro com amigos em uma cafeteria
movimentada. Você deseja chegar um pouco mais cedo para garantir uma mesa e
talvez fazer um pedido antecipado. Para ajudá-lo a planejar, você decide criar um
programa simples que solicita o horário em que você e seus amigos desejam chegar
à cafeteria e retorna o horário correspondente a uma hora antes.*/

#include <stdio.h>

int main() {
    int hora,minuto;
    printf("Digite a hora e o minuto que pretende chegar : \n");
    
    scanf("%d %d", &hora, &minuto);

    hora -= 1;
    if(hora < 0 ) {
        hora = 23;
    }
    if (hora > 24 || minuto > 59) {
        printf("Insira um horário válido. \n");
        return 0;
    }

    printf("Você deve chegar às %02d:%02d \n", hora, minuto);

    return 0;
}