#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double factorial (int n);
double e_a_la_x(int x, int tol);

int main()
{
    int x, tol;


    printf("Ingrese un numero X: ");
    scanf("%d", &x);
    printf("Ingrese una tolerancia: ");
    scanf("%d", &tol);

    printf("El resultado es: %.2f", e_a_la_x(x, tol));
    return 0;
}

double factorial(int n){
    int contador = 1;
    int resultado = 1;

    if(n == 0)
        return 1;

    while(contador <= n){

        resultado*= contador;

        contador++;
    }

    return resultado;
}

double e_a_la_x(int x, int tol){
    double r=1, t=1;
    int i=1;

    while(t<tol){
        t = pow(x, i) / factorial(i);
        r+=t;
        i++;
    }

    return r;
}
