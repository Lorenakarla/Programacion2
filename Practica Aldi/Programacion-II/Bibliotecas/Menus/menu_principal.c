#include "menu_principal.h"
#include "menu_tp_1.h"
#include "menu_tp_2.h"
#include "menu_tp_3.h"
#include "menu_tp_4.h"
#include "menu_tp_5.h"

//MENU PRINCIPAL//
void menu(){
    int opcion;
    printf("GUIA DE TRABAJOS PRACTICOS\n");
    printf("\n--------------------------\n");
    printf("\n1. Trabajo practico 1");
    printf("\n2. Trabajo practico 2");
    printf("\n3. Trabajo practico 3");
    printf("\n4. Trabajo practico 4");
    printf("\n5. Trabajo practico 5");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            menu_tp_1();
            break;
        case 2:
            menu_tp_2();
            break;
        case 3:
            menu_tp_3();
            break;
        case 4:
            menu_tp_4();
            break;
        case 5:
            menu_tp_5();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;

    }
}
