/* Realice un programa que dibuje este arbol con numeros en pantalla:
   1
  2 2
 3 3 3
4 4 4 4         */

#include <stdio.h>

int main() {
    int i, j, k, l;

    for(i=0; i<4; i++) {

        for(j=0; j<(4-(i+1)); j++) {
            printf(" ");
        }
        for(j=0; j<(i+1); j++) {
            printf("%d ", i+1);
        }
        printf("\n");
    }

    return 0;
}