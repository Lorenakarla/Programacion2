/*definicion de vectores + ejercicio*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//  "Inicializando un vector"

    int vec1[5];
    int vec2[]= {1,2,3,4,5};
    int vec3[5]= {0}; ///todos en cero
    int vec5[5]= {1,2,3,4,5,6,7,8}; ///solo me reconoce 5 pos, el resto me las ignora
    int i;

    ///me muestras el vec5+vec3+vec2 por ser consecutivos
    for(i=0; i<15; i++)
    {
        printf("%d\n", vec5[i]);
    }

    ////////////////////////////////////////

    ///PUNTEROS

//    me da la posicion de memoria sin los corchetes
    printf("%p\n", vec5);
//    esto esta mal
    ///vec1=vec2
//    esto si se puede
    vec1[0]=vec2[0];
    printf("%c", '\65');

    return 0;
}
