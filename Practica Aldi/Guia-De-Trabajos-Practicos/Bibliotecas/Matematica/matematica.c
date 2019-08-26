#include "matematica.h"

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
