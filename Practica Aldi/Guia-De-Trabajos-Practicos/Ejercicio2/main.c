#include <stdio.h>
#include <stdlib.h>
#include "../../Bibliotecas/Matematica/matematica.h"

int main()
{
    int numero, numero2;

    printf("Ejercicio 2: Desarrollar una función para calcular el combinatorio de m sobre n.\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("\nIngrese otro numero: ");
    scanf("%d", &numero2);

    if(numero <0 || numero2 <0){
        printf("El combinatorio de un negativo no existe!");
    }else{
        printf("El combinatorio de %d y %d es: %.0f", numero, numero2, combinatorio(numero, numero2));
    }

    return 0;
}
