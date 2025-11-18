#include <stdio.h>

int mod(int x, int y) {
    if(x == y){
        return 0;
    }else if(x < y){
        return x;
    }else
    return mod(x - y, y);
    
}

int main() {
    int x,y;
    printf("Digite x : ");
    scanf("%d", &x);
    printf("Digite y : ");
    scanf("%d", &y);
    if(y == 0) {
        printf("Divisão por zero? \n");
        return 1;
    }
    printf("MOD de %d e %d : %d", x, y, mod(x, y));
    return 0;
}