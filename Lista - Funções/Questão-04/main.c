/*
Maria tem como tarefa semanal verificar se um número '𝑥' é primo. Para evitar ter que pedir 
ajuda toda vez, ela pediu que você crie uma função que, ao receber um número '𝑥', retorne se 
'𝑥' é primo ou não. Em seguida, crie um pequeno programa que utilize essa função para testar e 
imprimir se cada número de 1 a 1000 é primo ou não.
*/

#include <stdio.h> 

int conferir_primo(int x) {

     int count = 0;
     int primo_conferido = 0;

     for( int i = 1; i <= x; i++){
        if( x % i == 0){
            count++;
           }
    }
    if(count == 2){
        primo_conferido = 1;
    }
    if(x == 1 || x == 2){
        primo_conferido = 2;
    }
    return primo_conferido;

}

int main() {
    int x;
    scanf("%d", &x);
    if(conferir_primo(x) == 0){
        printf("o número não é primo. \n");
    }
    if(conferir_primo(x) == 1) {
        printf("o número é primo \n");
    }if(conferir_primo(x) == 2){
        printf("o número é %d. \n", x);
    }
}