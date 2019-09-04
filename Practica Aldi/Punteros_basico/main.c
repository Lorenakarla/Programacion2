#include <stdio.h>
#include <stdlib.h>

int main()
{
    //como declaro una variable y la inicializo
    int numero = 40;
    //como declaro un puntero y lo inicializo
    int *puntero = &numero;

    printf("IMPRIMIR EL VALOR DE UNA VARIABLE\n");
    printf("Primera forma, sin puntero: ");
    printf("%d", numero);
    printf("\nSegunda forma, con puntero: ");
    printf("%d", *puntero);
    printf("\n\nIMPRIMIR LA POSICION DE MEMORIA DE UNA VARIABLE\n");
    printf("Primera forma, sin puntero: ");
    printf("%p", &numero);
    printf("\nSegunda forma, con puntero: ");
    printf("%p", puntero);
    printf("\n---------------------------------\n");
    return 0;
}
