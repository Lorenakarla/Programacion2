//insertar un elemento dada la posicion
#include <stdio.h>
#include <stdlib.h>

void insertar_elemento(int vec[], int pos);
void mostrar_vector(int vec[]);

int main()
{
    int vec[5]= {0},i, pos;

    printf("\nEl vector antes de insertar\n");
    mostrar_vector(vec);
    printf("\nIngresar la posicion: ");
    scanf("%d",&pos);
    mostrar_vector(vec);
    insertar_elemento(vec,pos);

    return 0;
}
void mostrar_vector(int vec[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d\n",vec[i]);
    }
}
void insertar_elemento(int vec[], int pos)
{
    int aux[],i=0;

    while(vec)
    {
        if((pos-1)==i )
        {

        }
    }
}
