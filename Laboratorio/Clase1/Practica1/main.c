#include <stdio.h>
#include <stdlib.h>
#include "../Biblioteca/matematica.h"

int main()
{
    int num, n, m;

    printf("Ingrese un numero\n");
    scanf("%d",&num);
    printf("El factorial de un numero es %.2f", factorial(num));
    printf("\n---------------------------------------\n");
    printf("Ingrese n: \n");
    scanf("%d",&n);
    printf("Ingrese m: \n");
    scanf("%d",&m);

    if(! (combinatorio(n,m)))
        printf("\nNo cumple con la formula\n");
        else
        printf("\nEl combiantorio es %f", combinatorio(n, m));
    return 0;
}
