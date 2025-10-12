/*Um grupo de amigos está debatendo sobre a altura entre eles para formar um time de basquete e 
assim definir a posição de cada jogador. Para resolver essa discussão, eles pediram que você criasse
um algoritmo que fizesse o seguinte: 
// * a. Leia a altura de 6 jogadores;
// * b. Imprima a maior e a menor altura, juntamente com o índice; 
// * c. Em seguida, imprima as alturas dos jogadores em ordem decrescente, do mais alto para o mais baixo.*/

#include <stdio.h>

int main() {
    float alturas[6];      
    int i, j;
    float aux;
    int indiceMaior = 0, indiceMenor = 0;
    float maior, menor;

        for (i = 0; i < 6; i++) {
        printf("Digite a altura do jogador %d: ", i + 1);
        scanf("%f", &alturas[i]);
    }

    maior = alturas[0];
    menor = alturas[0];

    for(i = 0; i<6; i ++){
        if(alturas[i] > maior){
            maior = alturas[i];
            indiceMaior = i;
        }
        if(alturas[i] < menor){
            menor = alturas[i];
            indiceMenor = i;
        }
    }

    printf("O menor jogador é o %d, com %.2f metros \n", indiceMenor + 1, menor);
    printf("O maior jogador é o %d, com %.2f metros \n", indiceMaior + 1, maior);

    // ! Buble Sort

    int flag;
    flag = 1;
    
    for(j = 0; j < 6; j++){
        while(flag){
            flag = 0;
            for(i = 0 ; i < 6-1 ; i++) {
                if(alturas[i] < alturas[i+1]){
                    aux = alturas[i];
                    alturas[i] = alturas[i+1];
                    alturas[i+1] = aux;
                    flag = 1;
                }
            }
        }
    }

    for(i=0 ; i<6 ; i++){
    printf("\n Item : %d: %.2f", i+1,alturas[i]);
}


    return 0;
}
