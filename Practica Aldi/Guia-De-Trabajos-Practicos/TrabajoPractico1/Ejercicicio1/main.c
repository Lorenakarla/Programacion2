#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"


int main()
{
    int numero;

    printf("Ejercicio 1: Desarrollar una función para calcular el factorial de un entero.\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero <0){
        printf("El factorial de un numero negativo no existe!");
    }else{
       printf("El factorial de %d es: %.0f", numero, factorial(numero));
    }

    return 0;
}
