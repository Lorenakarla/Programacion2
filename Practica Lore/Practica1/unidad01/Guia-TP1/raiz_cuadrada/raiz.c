#include <stdio.h>
#include <stdlib.h>

double raiz_cuadrada(int num, int tol);
int main()
{
    int num, tol;

    printf("Ingrese un numero y la tolerancia: \n");
    scanf("%d",&num);
    scanf("%d",&tol);

    printf("\nLa raiz cuadrada del numero ingresado es: %lf", raiz_cuadrada(num,tol));
    return 0;
}

double raiz_cuadrada(int num, int tol)
{
    double rtdo=1,rtdo2;

    while((rtdo - rtdo2) < tol)
    {
        rtdo2= 0.5 * (rtdo+(num/rtdo));
    }

    return rtdo2;
}
