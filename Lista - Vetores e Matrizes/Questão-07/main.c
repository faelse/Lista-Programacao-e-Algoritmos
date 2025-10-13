/*Gabriel estava desenvolvendo um minigame, mas encontrou dificuldades para 
desenvolver o algoritmo. A ideia do minigame é a seguinte: existe uma matriz 3x3 em 
que  a  cada  elemento  é  atribuído  um  valor  inteiro.  Se  o  valor  for  par,  ele  deve  ser 
substituído  por  1;  se fosse  ímpar,  por  -1.  Após essa  substituição,  o  programa  deve 
exibir a nova matriz atualizada. Gabriel solicitou sua ajuda para realizar essa tarefa.
*/

#include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];
    int i, j;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++)
        {
            printf("Atribua o valor da posição %d %d : ", i , j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] % 2 == 0){
                matriz[i][j] = 1;
            }else
            matriz[i][j] = -1;
        }
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas ; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }



    return 0;
}