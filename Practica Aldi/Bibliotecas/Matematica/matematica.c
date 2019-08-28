#include ..\Bibliotecas\Matematica\matematica.h"

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

double combinatorio(int n, int m){

    int resta = 0;
    double numerador, denominador, resultado;

    if(m>=n && n>=0){
        resta = m-n;
        numerador = factorial(m);
        denominador = factorial(n)*factorial(resta);
        resultado = numerador/denominador;
    }

    return resultado;
}

double e_a_la_x(int x, int tol){
    double r=1, t=1;
    int i=1;

    while(t>tol){
        t = pow(x, t) / factorial(t);
        r+=t;
    }

    return r;
}
