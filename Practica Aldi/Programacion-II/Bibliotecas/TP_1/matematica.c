#include "matematica.h"

double factorial(int numero)
{
    int contador = 1;
    int resultado = 1;

    if(numero == 0)
        return 1;

    while(contador <= numero){
        resultado*= contador;
        contador++;
    }
    return resultado;
}
void combinatorio(){return 0;}
void e_a_la_x(){return 0;}
void raiz_cuadrada(){return 0;}
void fibonacci(){return 0;}
void seno_de_x(){return 0;}
void numero_perfecto_defciente_abundante(){return 0;}
void producto_de_sumas_sucesivas(){return 0;}
void cociente_entero_y_resto(){return 0;}
void suma_primeros_n_numeros(){return 0;}
void suma_primeros_n_numeros_pares(){return 0;}
void suma_primeros_n_numeros_pares_menores(){return 0;}
void multiplicacion_rusa(){return 0;}
void numero_primo(){return 0;}
