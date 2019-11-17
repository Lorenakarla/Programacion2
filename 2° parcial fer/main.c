

#include "main.h"


int main()
{
    tLista lista;

    crearListaYCargarla(&lista);
    mostrarLista(&lista);

    puts("\nOrdenar");
    ordenarLista_2(&lista, compararUno_2);
    mostrarLista(&lista);

    puts("\nEliminar");
    eliminarDuplicados_2(&lista, compararDos_2, acumular_2);
    mostrarLista(&lista);

    return 0;
}

