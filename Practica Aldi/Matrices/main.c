#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"


int main()
{
    ///MATRIZ CUADRADA 5X5
    int matriz[][COL]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int i, j;
    //int a,b;
    //int matriz2[][TAM]= {{1,0,0,0,0},{0,2,0,0,0},{0,0,5,0,0},{0,0,0,6,0},{0,0,0,0,58}};
    //int matriz3[][TAM]= {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
    //int matriz4[][TAM]= {{1,0,0,0,0},{0,1,0,5,0},{0,0,1,0,0},{0,5,0,1,0},{0,0,0,0,1}};
    //int matriz5[TAM4][6]= {{1,2,3,4,15,4},{1,2,3,94,85,7},{1,2,13,42,55,143},{1,28,39,47,54,77}};
    //int matriz6[5][5] = {{1,2,3,4,5},{6,7,10,9,9},{8,12,15,1,7},{11,10,14,2,8},{1,1,1,1,1}};

    ///IMPRIMO LA MATRIZ
    //imprimirMatriz(5, 5, matriz);

    imprimir_triangulo_c(matriz, 5);


    /*printf("\nTriangulo inferior"
           "\nTriangulo superior");*/
///HACERRRR
    /*
        case 'u': //mostrar una matriz en espiral
     case 'q': //dado un i,j encontrar o devolver o sumar o lo que quieran la matriz mas grande que tenga su i,j como vertice
            if(!(matrizVertice(&matrix[0][0],m,n)))
                printf("\nHubo un error.");
            break;
        case 'r': //dado un i,j encontrar o devolver o sumar o lo que quieran la matriz cuadra /mas chica que tenga su i,j como vertice
            if(!(matrizVerticeCuadrada(&matrix[0][0],m,n)))
                printf("\nHubo un error.");
            break;
        case 's': //dado un i,j transponer la matriz que tenga ese i,j como vertice superior izquierdo|derecho|inferior izquierdo|inferior derecho
            transpuestaCuadrado(&matrix[0][0],m,n);
            break;
            */
    //printf("\nEl %d", 5/2);
    /*imprimirMatriz(5, 5, matriz6);
    espiral(5,5,matriz6);*/
    //sumaVerticeCuadrado(4,0,5,5,matriz6);
    //Triangulo
    /*
        //Encima
        sumatoriaEncimaDiagonal(matriz);
        sumatoriaEncimaDiagonalSecundaria(matriz);
        sumatoriaEncimaIncluyendoDiagonal(matriz);
        sumatoriaEncimaIncluyendoDiagonalSecundaria(matriz);
        //Debajo
        sumatoriaDebajoDiagonal(matriz);
        sumatoriaDebajoDiagonalSecundaria(matriz);
        sumatoriaDebajoIncluyendoDiagonal(matriz);
        sumatoriaDebajoIncluyendoDiagonalSecundaria(matriz);
*/
        //Sumatoria del cuadrado de la matriz (onda todo el borde)
        //imprimirMatriz(5,5,matriz);
        //sumatoriaBorde(matriz);
/*
        //Ejercicio 30
        printf("\nLa matriz es diagonal? %s", esDiagonal(matriz2)?"Si":"No");
        //Es identidad
        printf("\nLa matriz es identidad? %s", esIdentidad(matriz3)?"Si":"No");
        //Es simetrica
        printf("\nLa matriz es simetrica? %s", esSimetrica(matriz4)?"Si":"No");
        //Ejercicio 34
        transponerInSitu(matriz);
        //Ejercicio 35
        a=4;
        b=6;
        transponer(a,b, matriz5);
        //Ejercicio 36
        //Asumo que las matrices son aptas para el producto (a,b) y (b,a)
        producto(TAM, TAM,matriz, TAM, TAM,matriz2);
        trianguloSuperior(5,5,matriz6);
        trianguloInferior(5, 5, matriz6);
        trianguloIzquierdo(5, 5, matriz6);
        trianguloDerecho(5, 5, matriz6);*/

    return 0;
}

