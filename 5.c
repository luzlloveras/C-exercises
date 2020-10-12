/* El usuario ingresará 6 números enteros. El programa debe indicar si el ingreso
constituye una serie creciente, decreciente, o ninguna de las anteriores. */

#include <stdio.h>

int main() {
    int i, numero, numero2, creciente=0, decreciente=0;

    printf("Ingrese numero:\n");
    scanf("%d", &numero);

    for(i=1;i<6;i++) {
        printf("Ingrese numero:\n");
        scanf("%d", &numero2);
        if(numero2>numero) {
            numero=numero2;
            creciente++;
        }
        else {
            numero=numero2;
            decreciente++;
        }
    }

    if(creciente==5)
        printf("La serie es creciente\n");
    if(decreciente==5)
        printf("La serie es decrecienten");
    if(creciente!=5 && decreciente!=5)
        printf("La serie no es creciente ni decreciente\n");

    return 0;
}