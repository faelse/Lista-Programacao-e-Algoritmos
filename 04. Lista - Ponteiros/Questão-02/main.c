#include <stdio.h>

int potencia_valor(int base, int exp) {
    int resultado = 1;
    for(int i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

void potencia_referencia(int base, int exp, int *resultado) {
    *resultado = 1;
    for(int i = 0; i < exp; i++) {
        *resultado *= base;
    }
}
int main() {
    int x = 2, y = 3;
    int r = potencia_valor(x, y);
    printf("Resultado (por valor): %d\n", r); // x e y NÃO mudam
    printf("Resultado (por referencia): %d\n", r); // r é modificado na função

}
