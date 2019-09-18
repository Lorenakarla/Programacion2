#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pf;

    pf = fopen("...", "..."); ///abre un archivo

    ///pos es como un puntero que cuenta la cantidad que hay dentro del registro, no cada registro dentro del archivo

    return 0;
}

///Archivo: Esta guardado en un lugar permanente y no en memoria. Contiene datos. Puede ser un txt
///stdio.h: entrada y salida. C maneja toda entrada salida del sistema.
///FILE tipo de datos. Es una estructura
///maquina de 32 bit->4 bytes

///flags son banderas de estado, hya uan que dice si fue de lectura o escritura, otra que me dice si es fin de archivo
///lof, dirty, error
///fclose si no esta e la info queda en mem ram, hace fflush por dentro

///hay dos tipos de archivo: binario (no se puede leer) y de texto (si se puede leer)
