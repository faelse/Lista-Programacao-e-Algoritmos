/*Ela mais uma vez pediu ajuda com uma tarefa de casa, pois precisa de um programa 
que realize a seguinte tarefa: 
// * a. Dadas duas matrizes A e B, ambas 2x3, o programa deve calcular a soma das 
// * duas matrizes e criar uma matriz C com os resultados; 
// * b. Em seguida, o programa deve imprimir as matrizes A, B e C. 
*/

#include <stdio.h>

int main() {    
    int linhas = 2, colunas = 3;
    int matriz_a[linhas][colunas], 
    matriz_b[linhas][colunas], 
    matriz_c[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        printf("Linha %d, da matriz_a \n", i);
        for (int j = 0; j < colunas; j++)
        {
        printf("Coluna %d, da matriz_a : \n", j);
        scanf("%d", &matriz_a[i][j]);
        }
        printf("\n");

    }
    
    for(int i = 0; i < linhas; i++){
        printf("Linha %d, da matriz_b \n", i);
        for (int j = 0; j < colunas; j++)
        {
        printf("Coluna %d, da matriz_b : \n", j);
        scanf("%d", &matriz_b[i][j]);
        }
        printf("\n");

    }

    printf("\n");


    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
           matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
    
    printf("\n");
      for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", matriz_b[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", matriz_c[i][j]);
        }
        printf("\n");
    }

    printf("\n");

}