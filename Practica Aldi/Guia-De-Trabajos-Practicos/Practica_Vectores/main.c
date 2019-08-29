#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5], i, j, vec2[10] = {1,2,3,4,5,6,7,8,9,10}, k, l;

    for(i=0; i<5;i++){
        printf("Insertar numero %i: ", i+1);
        scanf("%d", &vec[i]);
    }

    printf("Vector:\n");

    for(j=0; j<5; j++){
        printf("%d\t", vec[j]);
    }

    printf("\nVector 2:\n");

    for(k=0; k<10; k++){
        printf("%d\t", vec2[k]);
    }

    printf("\nInsertar un numero en la posicion 2:\n");

    vec2[2]=20;

    for(l=0; l<10; l++){
        printf("%d\t", vec2[l]);
    }

    return 0;
}
