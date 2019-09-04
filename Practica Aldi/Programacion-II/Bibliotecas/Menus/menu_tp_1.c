#include "menu_tp_1.h"
#include "menu_matematico.h"
#include "menu_fechas.h"
#include "menu_vectores.h"
#include "menu_vectores.h"
#include "menu_principal.h"


void menu_tp_1(){
    int opcion;
    system("cls");
    printf("1. Trabajo practico 1\n");
    printf("\n--------------------------\n");
    printf("\n1. Ejercicios matematicos");
    printf("\n2. Ejercicios con fechas");
    printf("\n3. Ejercicios con vectores");
    printf("\n4. Ejercicios con matrices");
    printf("\n5. Volver");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            menu_matematico();
            break;
        case 2:
            menu_fechas();
            break;
        case 3:
            menu_vectores();
            break;
        case 4:
            menu_matrices();
            break;
        case 5:
            menu();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;

    }
}
