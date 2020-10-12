//  Pedir al usuario cinco números enteros. Informarle cuál es el mayor.

#include <stdio.h>

int main() {
    int i, numero1, numero2;
    printf("Ingrese numero:\n");
    scanf("%d", &numero1);
    for(i=1;i<5;i++) {
        printf("Ingrese numero:\n");
        scanf("%d", &numero2);
        if(numero2>numero1)
            numero1=numero2;
    }
    printf("El numero mas grande es: %d \n", numero1);
    return 0;
}