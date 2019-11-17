#include<lista.h>
#include<stdlib.h>
#include<stdio.h>

int instertar_prim5_lista(t_lista * plista, const t_info * pinfo, int (*comp)(const t_info *, const t_info*))
{
    t_nodo *pnue; int cont=0;

    while (*plista && comp(pinfo,&(*plista)->pinfo) > 0 && cont < 5)
    {
        cont++;
        plista= &(*plista)->psig;

    }
    if(cont >= 5)
        return OK;

    pnue= (t_nodo *)malloc(sizeof(t_nodo));

    if(!pnue)
            return SIN_MEM;
    pnue->info= *pinfo;

    pnue->psig= pnue;

    while(*plista && cont < 5)
    {
        cont++;
        plista=&(*plista)->psig;
    }
    free(*plista);
    *plista= NULL;
    return OK;
}

