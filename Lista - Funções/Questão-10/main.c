/*
 Ele agora precisa de ajuda em recursividade, e um dos tópicos é a potenciação. Ele pediu 
que você crie uma função recursiva que, dada a base '𝑥' e o expoente '𝑦', calcule '𝑥' elevado a 
'𝑦'.
*/
#include <stdio.h>

int potencia(int x, int y) {
    if (y == 0) {         
        return 1;
    }
    return x * potencia(x, y - 1);  
}

int main() {
    int x, y;

    printf("Digite a base: ");
    scanf("%d", &x);

    printf("Digite o expoente: ");
    scanf("%d", &y);

    int resultado = potencia(x, y);

    printf("%d elevado a %d = %d\n", x, y, resultado);

    return 0;
}
