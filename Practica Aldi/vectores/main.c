#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int contar_cartacter(char * vec);

int main()
{
    char nombre[]="esteban";

    printf("La cantidad de caracteres es de: %d", contar_cartacter(nombre));

    return 0;
}

int contar_cartacter(char * vec)
{
    int cont=0;
    while(*vec != '\0')
    {
        vec++;
        cont++;
    }

    return cont;
}
