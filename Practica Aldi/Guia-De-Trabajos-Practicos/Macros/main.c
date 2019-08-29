#include <stdio.h>
#include <stdlib.h>

//Macros

#define aMayuscula(x) ((x)>='a' && (x)<='z')?(x)-32:(x)
#define aMinuscula(x) ((x)>='A' && (x)<='A')?(x)+32:(x)
#define esNumero(x) ((x)>='0' && (x)<='9')?1:0
#define esLetra(x) (((x)>='a' && (x)<='z')||((x)>='A' && (x)<='A'))?1:0

int main()
{
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);
    printf("\n");

    printf("\nLa letra %c paso a: %c", caracter, aMayuscula(caracter));
    printf("\nLa letra %c paso a: %c", caracter, aMinuscula(caracter));

    if(esNumero(caracter)==1)
       printf("\nEl caracter %c es un numero", caracter);
    else
        printf("\nEl caracter %c no es un numero", caracter);


    if(esLetra(caracter))
       printf("\nEl caracter %c es una letra", caracter);
    else
        printf("\nEl caracter %c no es una letra", caracter);

    return 0;
}
