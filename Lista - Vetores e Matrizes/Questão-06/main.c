/* Em  uma  biblioteca,  uma  estudante  chamada  Laura  estava  pesquisando  livros  para 
seu  projeto  pessoal.  Ela  tinha  uma  lista  de  livros  em  uma  prateleira,  representados 
por um vetor de números inteiros que indicavam o id de cada livro. Então, ela pediu 
sua ajuda para fazer um algoritmo que receba o tamanho de um vetor, depois receba 
os ids dos livros, e no final receba o id de um livro a ser pesquisado. O algoritmo deve 
verificar se o livro está disponível e, se sim, apresentar o índice.
* Receba tamanho do vetor
* Receba ids dos livros
! Pesquisa por id do livro. -> se estiver disponivel retorna o índice
! id != indice
*/

#include <stdio.h>

int main() {

    int tamanho;
    int i;
    int busca;

    printf("Digite a quantidade de livros que você terá no total : ");
    scanf("%d", &tamanho);

    int lista[tamanho];

        
    for(i = 0; i < tamanho; i++){
        printf("Digite o id do livro de índice %d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Qual valor você quer buscar?  \n");
    scanf("%d", &busca);

    int encontrado = 0;


    printf("O livro com ID %d aparece nos índices: ", busca);
    for(i = 0; i < tamanho; i++){
        if(lista[i] == busca){
            printf("%d ", i+1);
            encontrado = 1;
        }
    }

    if(encontrado = 0) {
        printf("Valor não encontrado \n");
    }

    return 0;
}
