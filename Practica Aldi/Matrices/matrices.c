#include "matrices.h"
#include "stdio.h"

void imprimirMatriz(int a, int b, int matriz[a][b])
{
    printf("\n\n");

    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");

    }
}

void imprimir_triangulo_c(const int matriz[][COL], int ord)
{
    int i, j;

    for(i=1; i<ord-1; i++)
    {
        printf("%*s", ((i+1>ord-i?i+1:ord-i)/2)*2,"");
        for(j=i+1>ord-i?i+1:ord-i; j<ord; j++)
        {
            printf("%2d\t",matriz[i][j]);

        }
        printf("\n");
    }
}

void producto_de_matrices(int matriz1[][COL], int matriz2[][COL], int matrizRes[][COL],int rowMat1, int colMat1, int rowMat2, int colMat2)
{
    ///para que funcione el producto de matrices colMAt1 = rowMAt2
}

void sumatoriaEncimaDiagonal(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM-1; i++)
        for (j = 1+i; j < TAM; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por encima de la diagonal principal es %d\n", suma);
}
//Son todos aquellos que sumando sus coordenadas, me quedan menor al TAM-1
void sumatoriaEncimaDiagonalSecundaria(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM-1; i++)
        for (j = 0; j < TAM-1-i; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por encima de la diagonal secundaria es %d\n", suma);
}
void sumatoriaEncimaIncluyendoDiagonal(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM; i++)
        for (j = i; j < TAM; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por encima de la diagonal principal INCLUYENDOLA es %d\n", suma);
}

void sumatoriaEncimaIncluyendoDiagonalSecundaria(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM-i; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por encima de la diagonal secundaria INCLUYENDOLA es %d\n", suma);
}
void sumatoriaDebajoIncluyendoDiagonal(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM; i++)
        for (j = 0; j <= i; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por debajo de la diagonal principal INCLUYENDOLA es %d\n", suma);
}
void sumatoriaDebajoDiagonalSecundaria(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 1; i <TAM ; i++)
        for (j = TAM-i; j < TAM; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por debajo de la diagonal SECUNDARIA es %d\n", suma);
}
void sumatoriaDebajoDiagonal(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 1; i < TAM; i++)
        for (j = 0; j < i; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por debajo de la diagonal principal es %d\n", suma);
}
//Igual cuidado porque calculo otra cosa aca..
void sumatoriaDebajoIncluyendoDiagonalSecundaria(int matriz[TAM][TAM])
{
    int i, j, suma=0;
    for (i = 0; i < TAM; i++)
        for (j = TAM-1-i; j < TAM; j++)
            suma+=matriz[i][j];

    printf("\nLa sumatoria por debajo de la diagonal secundaria INCLUYENDOLA es %d\n", suma);
}
void sumatoriaBorde(int matriz[TAM][TAM])
{
    int i, suma=0;
    for (i = 0; i < TAM; i++)
        suma+=matriz[0][i] + matriz[TAM-1][i];

    for(i=1; i<TAM-1; i++)
        suma+=matriz[i][0]+matriz[i][TAM-1];
    printf("\nLa sumatoria del borde es %d\n", suma);
}
int esDiagonal(int matriz[TAM][TAM])
{
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            if(j>i &&!(matriz[i][j]==0&&matriz[j][i]==0))
                return 0;

    return 1;
}
int esIdentidad(int matriz[TAM][TAM])
{
    int i, j;

    if(!esDiagonal(matriz))
        return 0;

    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            if(i==j && matriz[i][j]!=1)
                return 0;
    return 1;
}
int esSimetrica(int matriz[TAM][TAM])
{
    int i, j;

    for (i = 0; i < TAM-1; i++)
        for (j = 1; j < TAM; j++)
            if(matriz[i][j]!=matriz[j][i])
                return 0;

    return 1;
}
void transponerInSitu(int matriz[TAM][TAM])
{
    int i, j;
    printf("\n===MATRIZ ORIGINAL====");
    imprimirMatriz(TAM, TAM,matriz);

    for (i = 0; i < TAM-1; i++)
        for (j = 1; j < TAM; j++)
            if(j>i)
                intercambiar(&matriz[i][j], &matriz[j][i]);

    printf("\n===MATRIZ TRANSPUESTA====");

    imprimirMatriz(TAM, TAM, matriz);
}
void intercambiar(int *a, int *b)
{
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;
}
void transponer(int a, int b,int matriz[a][b])
{
    int i, j, matriz2[b][a];
    printf("\n===MATRIZ ORIGINAL====");
    imprimirMatriz(a, b,matriz);

    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            matriz2[j][i]=matriz[i][j];

    printf("\n===MATRIZ TRANSPUESTA====");

    imprimirMatriz(b, a, matriz2);
}
void producto(int a, int b, int matriz[a][b], int c, int d,int matriz2[c][d])
{
    if(!(a==d&&b==c))
    {
        printf("\nInserte dos matrices que tengan dimensiones inversas.");
        return;
    }

    int matrizResultante[a][d],i=0,j=0,k=0;

    //Itero por la fila horizontal de la nueva
    for(i=0; i<a; i++)
    {
        //Itero por la fila vertical de la nueva
        for(j=0; j<d; j++)
        {
            //Limpio por las dudas!
            matrizResultante[i][j]=0;
            for(k=0; k<b; k++)
            {
                //Tener cuidado, analizar bien.
                matrizResultante[i][j]+=matriz[i][k]*matriz2[k][j];
            }
        }
    }

    imprimirMatriz(a,d,matrizResultante);
}

void trianguloSuperior(int a, int b, int matriz[a][b])
{
    int i=0, j=0, suma=0;
    for(i=0; i<(a-1)/2; i++)
        /*  for(j=0; j<b; j++)
          {
              if(i>j&&i+j>=(b)&&i!=j)
              {
                  suma+= matriz[i][j];
              }
          }*/
        for(j=i+1; j<b-1-i; j++)
            suma+= matriz[i][j];

    printf("\nLa sumatoria del triangulo superior es %d\n", suma);
}
void trianguloDerecho(int a, int b, int matriz[a][b])
{
    int i=0, j=0, suma=0;
    //Lo veo de "costado"
    //Voy de cero hasta 2
    //Mis columnas pueden ser 0 o 1
    for(i=b-1; i>(a-1)/2; i--)
        /* for(j=0; j<(b-1)/2; j++)
         {
             if(i>j&&i+j<(b)-1&&i!=j)
             {
                 suma+= matriz[i][j];
             }
         }*/
        //Depende la iteracion
        //i=4,i=3
        //CASOS
        //J entre 1 y 3
        //J entre 2 y 3

        //Entonces tengo los siguientes casos
        //Para i=4, j=1, j=2 y j=3
        //Para i=3, j=2
        for(j=i-1; j>b-1-i; j--)
            // printf("%d\t%d\t\t%d\n",i,j, matriz[i][j]);
            suma+= matriz[j][i];
    //printf("\n");

    printf("\nLa sumatoria del triangulo derecho es %d\n", suma);

}
/**
@author: JK
Debido a que tengo la mayor cantidad de numeros en la columna, es conveniente invertir las mismas (o sea, cambiar la i por la j)
Luego cuando hago la sumatoria, debo respetar esto haciendo matriz[j][i]
**/
void trianguloIzquierdo(int a, int b, int matriz[a][b])
{
    int i=0, j=0, suma=0;
    //Lo veo de "costado"
    //Voy de cero hasta 2
    //Mis columnas pueden ser 0 o 1
    for(i=0; i<(a)/2; i++)
        /* for(j=0; j<(b-1)/2; j++)
         {
             if(i>j&&i+j<(b)-1&&i!=j)
             {
                 suma+= matriz[i][j];
             }
         }*/
        //Depende la iteracion
        //i=0,i=1
        //CASOS
        //J entre 1 y 3
        //J entre 2 y 3

        //Entonces tengo los siguientes casos
        //Para i=0, j=1, j=2 y j=3
        //Para i=1, j=2
        for(j=i+1; j<b-1-i; j++)
            //    printf("%d\t%d\t\t%d\n",i,j, matriz[i][j]);

            suma+= matriz[j][i];
    // printf("\n");
    printf("\nLa sumatoria del triangulo izquierdo es %d\n", suma);

}
void trianguloInferior(int a, int b, int matriz[a][b])
{
    int i=0, j=0, suma=0;
    for(i=(a-1); i>(a)/2; i--)
        /*  for(j=0; j<b; j++)
          {
              if(i>j&&i+j>=(b)&&i!=j)
              {
                  suma+= matriz[i][j];
              }
          }*/
        for(j=i-1; j>=b-i; j--)
            suma+= matriz[i][j];

    printf("\nLa sumatoria del triangulo inferior es %d\n", suma);
}
void simetriaCentral(int a,int b,int matriz[a][b])
{
    //Asumo que es cuadrada
    int i=0,j=0, aux=0;
    //Primero los triangulos de arriba y abajo, despues los de izquierda y derecha
    for(i=0; i<a/2; i++)
    {
        for(j=i; j<b-i; j++)
        {
            aux =matriz[i][j];
            matriz[i][j] = matriz[a-1-i][b-1-j];
            matriz[a-1-i][b-1-j] = aux;
        }
    }

    for(i=0; i<b/2; i++)
    {
        for(j=i+1; j<a-1-i; j++)
        {
            aux = matriz[j][i];
            matriz[j][i]=matriz[b-1-j][a-1-i];
            matriz[b-1-j][a-1-i]=aux;
        }
    }
    imprimirMatriz(a,b,matriz);
}
void sumaVerticeCuadrado(int coordenadaX,int coordenadaY,int limiteX,int limiteY, int matriz[limiteX][limiteY])
{
    //Resulta mas limpio definir los limites asi, dentro del for era bastante feo/desordenado
    int i=0,j=0,suma=0;
    int minFil=(coordenadaX-1<0)?0:(coordenadaX-1);
    int maxFil=(coordenadaX+1>limiteX-1)?limiteX-1:(coordenadaX+1);
    int minCol=((coordenadaY-1)<0)?0:(coordenadaY-1);
    int maxCol=(coordenadaY+1>limiteY-1)?limiteY-1:(coordenadaY+1);

    //Debug
    /*printf("\ni min:%d\tmax:%d",minFil,maxFil);
    printf("\nj min:%d\tmax:%d\n",minCol,maxCol);*/

    for(i=minFil; i<=maxFil; i++)
        for(j=minCol; j<=maxCol; j++)
            suma+=matriz[i][j];

    suma-=matriz[coordenadaX][coordenadaY];

    printf("\nEl resultado de la suma de los vecinos es %d", suma);
}
void intercambio_int(int *a, int *b)
{
    *a+=*b;
    *b = *a-*b;
    *a-=*b;
}

void transponer_matriz_secundaria(const int orden, int m[orden][orden])
{
    int i, j;
    for(i=0; i<orden; i++)
        for(j=0; j<orden-1-i; j++)
            intercambio_int(&m[i][j], &m[orden-j-1][orden-i-1]);
}
