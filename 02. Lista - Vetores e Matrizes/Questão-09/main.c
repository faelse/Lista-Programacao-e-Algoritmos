// ~/Lista - Vetores e Matrizes/Questão-09/Questão-09.png

#include <stdio.h>

int main() {
    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas];

    int contador = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            contador++;
            matriz[i][j] = contador; 
        }
    }

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                printf("%2d ", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(int i = 0; i < linhas; i++){
        int soma_linha = 0;
            for(int j = 0; j < colunas; j++){
                soma_linha += matriz[i][j];
            }
            printf("soma da linha %d : %d \n", i, soma_linha);
        }
        printf("\n");
        int diagonal[linhas];
        for(int i = 0; i< linhas; i++){
              diagonal[i] = matriz[i][i];
        }

        for(int i = 0; i< linhas; i++){
            printf("%d ", diagonal[i]);
        }
    return 0;
}