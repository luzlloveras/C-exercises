/* Pedir al usuario una fecha, en este formato: 30/4/2013
Indicar si la fecha es válida o no: 
- el mes debe ser valido
- el dia ingresado debe existir en ese mes
- el anio debe ingresarse entre 1900 y 2100     */

#include <stdio.h>

int main() {
    int dia, mes, anio, flag=0;
    printf("Ingrese fecha formato nn/n/nnnn\n");
    scanf("%d/%d/%d", &dia, &mes, &anio);
    
    if(dia<0 || dia>31)
        printf("la fecha no es valida");
    
    if(dia>28 && mes==2)
        printf("la fecha no es valida");

    if(dia>30 && (mes==4 || mes==6 || mes==9 || mes==11))
        printf("la fecha no es valida");
    
    if(mes<1 || mes>12)
        printf("la fecha no es valida");

    if(anio<1900 || anio>2100)
        printf("la fecha no es valida");

    return 0;
}