/* Realice un programa que dibuje en pantalla un triángulo rectángulo,
utilizando asteriscos, de esta forma:
   *
  **
 ***
****                                        */

#include <stdio.h>

int main() {
    int i, j, cateto;
    printf("Ingrese numero de catetos:\n");
    scanf("%d", &cateto);

    for (i=0; i<cateto; i++) {
        
        for(j=0; j<(cateto-(i+1)); j++) {
            printf(" ");
        }
        
        for(j=0; j<i+1; j++) {
            printf("*");
        }
        printf("\n");
	}

    return 0;
}
