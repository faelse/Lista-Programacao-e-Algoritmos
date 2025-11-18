#include <stdio.h>

int mdc(int x, int y){
    if(x == y){
        return x;
    }
    else if(x < y){
        return mdc(y, x);
    }else
    return mdc(x - y, y);
}

int main() {
    int x,y;
    printf("Digite x : ");
    scanf("%d", &x);
    printf("Digite y : ");
    scanf("%d", &y);
    
    if(x <= 0 || y <= 0){
        printf("Não é perimitido valor menor ou igual a 0 \n");
        return 1;    
    }
    printf("%d", mdc(x,y));
    return 0;
}