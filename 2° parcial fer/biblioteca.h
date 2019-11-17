#ifndef BIBLITECA_H
#define BIBLITECA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
    int     di,
            me,
            an;
} tFecha;

typedef struct
{
    int     hh,
            mm,
            ss;
} tHora;

typedef struct
{
    char    codSuc[7],
            nroCta[14];
    tFecha  fecMov;
    tHora   horMov;
    double  impMov;
} tInfo;

typedef struct sNodo
{
    tInfo   info;
    struct sNodo   *sig,
                   *ant;
} tNodo, *tLista;


void crearListaYCargarla(tLista *p);

int mostrarLista(const tLista *p);


/** debe desarrollar funciones que reemplacen el uso de ...                 */
void ordenarLista_2(tLista *p, int (*comparar)(const tInfo *, const tInfo *));

int eliminarDuplicados_2(tLista *p,
                         int (*comparar)(const tInfo *, const tInfo *),
                         void (*acumular)(tInfo *, const tInfo *));

int compararUno_2(const tInfo *d1, const tInfo *d2);

int compararDos_2(const tInfo *d1, const tInfo *d2);

void acumular_2(tInfo *d1, const tInfo *d2);

/** ... con las siguientes                                                  */
void ordenarLista(tLista *p, int (*comparar)(const tInfo *, const tInfo *));

int eliminarDuplicados(tLista *p,
                         int (*comparar)(const tInfo *, const tInfo *),
                         int (*acumular)(tInfo *, const tInfo *));

/** además de resolver las funciones de comparar y acumular                 */



#endif
