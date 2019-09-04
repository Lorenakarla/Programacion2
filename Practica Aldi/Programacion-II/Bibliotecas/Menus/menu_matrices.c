#include "menu_matrices.h"
#include "menu_tp_1.h"

void menu_matrices()
{
int opcion;
    system("cls");
    printf("Trabajo practico 1 - Ejercicios con matrices\n");
    printf("\n--------------------------\n");
    printf("\n1.  Sumar elementos por encima y por debajo de la diagonal principal y secundaria");
    printf("\n2.  Sumar elementos de la diagonal principal y secundaria");
    printf("\n3.  Determinar si una matriz cuadrada es matriz entidad");
    printf("\n4.  Determinar si una matriz cuadrada en simetrica");
    printf("\n5.  Transpoenr in situ una matriz");
    printf("\n6.  Obtener la matriz traspuesta");
    printf("\n7.  Producto entre dos matrices");
    printf("\n8.  Determinar si una matriz esta correctamente generada");
    printf("\n9.  Volver");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            sumar_elementos_de_una_matriz();
            break;
        case 2:
            sumar_elementos_de_las_diagonales();
            break;
        case 3:
            matriz_entidad();
            break;
        case 4:
            matriz_asimetrica();
            break;
        case 5:
            trasposicion_in_situ();
            break;
        case 6:
            matriz_traspuesta();
            break;
        case 7:
            producto_matrices();
            break;
        case 8:
            matriz_correctamente_generada();
            break;
        case 9:
            menu_tp_1();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;
    }
}
