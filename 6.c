/* Realice un programa que dibuje en pantalla un triángulo rectángulo,
utilizando asteriscos. Permitir que el usuario ingrese el tamaño de los catetos. */

#include <stdio.h>

int main() {
    int i, j, cateto;
    printf("Ingrese numero de catetos:\n");
    scanf("%d", &cateto);

    for (i=0; i<cateto; i++) {
        for(j=0; j<i+1; j++) {
            printf("*");
        }
        printf("\n");
	}

    return 0;
}
