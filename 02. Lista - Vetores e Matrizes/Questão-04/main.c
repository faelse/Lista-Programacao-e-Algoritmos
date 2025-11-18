
/*Roberto  é  o  dono  de  uma  empresa  com  10  filiais  e  precisa  de  ajuda  para  criar  um 
algoritmo. Ele possui uma tabela com 10 linhas e 2 colunas. Na primeira coluna, estão 
registrados os investimentos que ele fez em cada filial, enquanto na segunda coluna, 
está indicado o valor de retorno obtido por cada uma dessas filiais, veja o exemplo a 
seguir. 
 
Analisando a tabela vemos que a filial 
1 investiu 3000R$ e obteve 5000R$ de 
retorno, logo teve um lucro de 2000R$, 
já a filial 2 investiu 30000R$ mas 
obteve  de  retorno  apenas  10000R$, 
tendo um prejuízo de 2000R$
  
Você deve desenvolver um algoritmo 
que faça o seguinte: 
a. Imprima o índice da linha de todas as filiais que deram lucro; 
b. Calcule  a  média  dos  lucros,  desconsiderando  todas  as  filiais  que  deram 
prejuízo. 
*/

#include <stdio.h> 


int main() {
    int linhas = 10;
    int colunas = 2;
    float lucro = 0;
    int c = 0;
    float media = 0.0;
    float tabela[linhas][colunas];

    for(int i = 0; i < linhas ; i++ )
    {   
        printf("Digite o Investimento e o Lucro da filial %d \n", i+1);
        for(int j = 0; j < colunas; j++){
            scanf("%f", &tabela[i][j]);
        }
    }
    for(int i = 0; i < linhas ; i++ )
    {   
        lucro = tabela[i][1] - tabela[i][0];
        if(lucro > 0){
            media += lucro;
            printf("Lucro de %.2f da filial %d \n", lucro, i+1);
            c++;
        }
    }
            printf("Média de todos os lucros %.2f \n", media / c );



    return 0 ;
}