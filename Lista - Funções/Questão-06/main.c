/*
Marcos possui várias listas onde guarda as notas das equipes de sua empresa e gostaria de 
identificar as melhores notas de cada equipe. Ele pediu que você criasse uma função que receba 
um vetor (lista) como argumento e o retorne ordenado de forma crescente
*/

#include <stdio.h>

int ordenar_lista( int notas[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (notas[j] > notas[j + 1]) {
            int temp = notas[j];
            notas[j]= notas[j + 1];
            notas[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Diga a quantidade de notas : ");
    scanf("%d", &n);
    int notas[n];

    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    ordenar_lista(notas, n);

    printf("Notas ordenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", notas[i]);
    }
    return 0;
}