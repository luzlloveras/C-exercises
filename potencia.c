#include <stdio.h>
int POTENCIA(int, int);

int main() {
    int a;
    a = POTENCIA(2, 7);
    printf("%d", a);
    return 0;
}

int POTENCIA(int base, int exponente) {
    int i, resultado=base;
    for(i=1;i<exponente;i++) {
        resultado*=base;
    }
    return resultado;
}