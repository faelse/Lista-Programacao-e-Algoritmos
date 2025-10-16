/* Jorge é dono de uma lanchoneta e está montando seu cardápio. 
Ele possui uma lista com os preços dos lanches que irá vender, e quer ter seu cardápio organizado. 

Para isso, precisa que você faça um programa que, ao receber uma lista de preços, a ordene de forma decrescente 
e mostre quais são os lanches de menor e de maior valores. 

Exemplo de lista de preços :

{ 54.50 , 12.00 , 5.50 , 33.75 , 8.00 , 16.20 , 2.23 , 48/.70 , 31.20 , 22.990 }
*/


#include <stdio.h> 

int main() {
    int n;
    printf("Digite a quantidade de preços que sua lista terá : ");
    scanf("%d", &n);
    float lista[n];

    for(int i = 0; i<n; i++){
        printf("Digite o preço de índice : %d \n", i);
        scanf("%f", &lista[i]);
    }

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(lista[i] < lista[j]){
            float aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
            }
        }
    }

        printf("Lista ordenada de forma decrescente : ");
        for(int i = 0; i<n; i++){
        printf(" %.2f \n", lista[i]);
    }
    printf("Maior preço : %.2f \n", lista[0]);
    printf("Maior preço : %.2f", lista[n-1]);


    return 0;
}