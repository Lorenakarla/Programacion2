///Elliminar un elemento en un vector dada la posicion
#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int eliminar(int v[], int ce, int pos);
void mostrar_vector(int v[],int ce);

int main()
{
    int vec[]= {1,2,4,5,6}, pos, ce=TAM;

    printf("\n------Mostrando el vector original-----\n");
    mostrar_vector(vec,TAM);

    do
    {
        printf("\nIngrese una posicion (hasta %d): ",TAM);
        scanf("%d",&pos);
    }
    while( !(pos> 0 && pos <=TAM));

    ce=eliminar(vec,TAM, pos);
    mostrar_vector(vec,ce);

    return 0;
}

void mostrar_vector(int v[],int ce)
{
    int i;

    for(i=0; i<ce; i++)
    {
        printf("%d\t",v[i]);
    }
}

int eliminar(int v[], int ce, int pos)
{
    int cont=1;
    if(*v)
    {
        while(cont != pos)
        {
            v++;
            cont++;
        }
        while(cont <= ce)
        {
            *v=*(v+1);
            cont++;
            v++;
        }
    }
    ce--;
    return ce;
}

