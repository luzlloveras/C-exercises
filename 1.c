//  Pedir al usuario tres números enteros. Informarle cuál es el mayor.

#include <stdio.h>

int main() {
    int numero1, numero2, numero3;
    printf("Ingrese tres numeros:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if(numero1>numero2)
        if(numero1>numero3)
            printf("El %d es el numero mas grande\n", numero1);
    if(numero2>numero3)
        if(numero2>numero1)
            printf("El %d es el numero mas grande\n", numero2);
    if(numero3>numero1)
        if(numero3>numero2)
            printf("El %d es el numero mas grande\n", numero3);

    return 0;
}