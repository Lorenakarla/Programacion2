#include <stdio.h>
#include <stdlib.h>

void fibonacci(int numero);

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    fibonacci(numero);

    return 0;
}

void fibonacci(int numero)
{
    int i, x=0, y=1, suma=1;
    printf("1 ");
    for(i=1;i<numero;i++)
    {
        suma = x +y;
        x=y;
        y=suma;

        printf("%d ", suma);
    }
}
