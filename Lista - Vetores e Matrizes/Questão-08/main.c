/* O IBGE (Instituto Brasileiro de Geografia e Estatística) precisa de um novo algoritmo. 
Eles  têm  dados  sobre  a  idade  das  6  cidades  mais  velhas  de  6  estados  diferentes, 
organizados  em  uma  matriz  6x6.  Agora,  eles  solicitam  que  você  desenvolva  um 
algoritmo que realize as seguintes tarefas: 
* a. Leia a matriz de idade das cidades; 
* b. Organize as idades das linhas de forma crescente; 
* c. Solicite  ao  usuário  que  informe  o  índice  de  uma  linha  da  matriz  e  calcule  a 
* média de idade das 6 cidades daquele estado. 
*/

#include <stdio.h>

int main () {
    int linhas = 2;
    int colunas = 3;
    int matriz[linhas][colunas];
    int i,j, k, indice_media;
    float soma = 0;

    for(i = 0; i < linhas; i++) {
      printf("\nEstado %d:\n", i);
        for(j = 0; j < colunas; j++) {
           printf("Cidade %d: \n", j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < colunas; k++){
                if(matriz[i][j] < matriz[i][k] ){
                    int aux = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = aux;
                }
            }
        }
    }

    for(i = 0; i < linhas; i++){
            for(j = 0; j < colunas; j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
    printf("Digite o índice da linha da matriz para se calcular a média: \n ");
    scanf("%d", &indice_media);

    for(i = 0; i < colunas; i ++){
        soma += matriz[indice_media][i];
    } 

    printf("%.2f", soma / linhas);
        

    return 0;
}