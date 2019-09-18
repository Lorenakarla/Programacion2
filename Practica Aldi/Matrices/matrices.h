#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED
#define TAM 5
#define TAM4 4
#define COL 5
void imprimirMatriz(int a, int b, int matriz[][TAM]);
void imprimir_triangulo_c(const int matriz[][COL], int ord);
void sumatoriaEncimaDiagonal(int matriz[TAM][TAM]);
void sumatoriaEncimaDiagonalSecundaria(int matriz[TAM][TAM]);
void sumatoriaEncimaIncluyendoDiagonal(int matriz[TAM][TAM]);
void sumatoriaEncimaIncluyendoDiagonalSecundaria(int matriz[TAM][TAM]);
void sumatoriaDebajoDiagonal(int matriz[TAM][TAM]);
void sumatoriaDebajoDiagonalSecundaria(int matriz[TAM][TAM]);
void sumatoriaDebajoIncluyendoDiagonal(int matriz[TAM][TAM]);
void sumatoriaDebajoIncluyendoDiagonalSecundaria(int matriz[TAM][TAM]);
void sumatoriaBorde(int matriz[TAM][TAM]);
int esDiagonal(int matriz[TAM][TAM]);
int esIdentidad(int matriz[TAM][TAM]);
int esSimetrica(int matriz[TAM][TAM]);
void transponerInSitu(int matriz[TAM][TAM]);
void intercambiar(int *,int *);
void transponer(int a, int b, int matriz[a][b]);
void producto(int a, int b, int matriz[a][b], int c, int d,int matriz2[c][d]);
void trianguloSuperior(int a, int b, int matriz[a][b]);
void trianguloDerecho(int a, int b, int matriz[a][b]);
void trianguloIzquierdo(int a, int b, int matriz[a][b]);
void trianguloInferior(int a, int b, int matriz[a][b]);
void simetriaCentral(int a, int b,int matriz[a][b]);
void sumaVerticeCuadrado(int coordenadaX,int coordenadaY,int limiteX,int limiteY, int matriz[limiteX][limiteY]);
void intercambio_int(int *a, int *b);
void transponer_matriz_secundaria(const int orden, int m[orden][orden]);

#endif // MATRICES_H_INCLUDED
