/*
 Outro tópico é sobre os divisores de um número. Ele pediu que você criasse uma função que, 
dado um número '𝑥', informe quantos e quais são os divisores inteiros desse número.
*/

#include <stdio.h> 

void divisores(int x) {
    int count = 0;
    printf("Os divisores são : ");
    for(int i = 1; i <=x; i++){
        if(x % i == 0){
            printf("%d,", i);
            count++;
        }
    }
    printf("Quantidade de divisores : %d \n", count);

}


int main() {
    int x;
    printf("Digite o valor de x : ");
    scanf("%d", &x);
    divisores(x);
    return 0;
}