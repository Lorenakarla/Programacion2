#include "menu_fechas.h"
#include "menu_tp_1.h"

void menu_fechas()
{
    int opcion;
    system("cls");
    printf("Trabajo practico 1 - Ejercicios con fechas\n");
    printf("\n--------------------------\n");
    printf("\n1.  Validar fecha");
    printf("\n2.  Sumar un dia a una fecha");
    printf("\n3.  Sumarle n dias a un fecha");
    printf("\n4.  Restarle n dias a una fecha");
    printf("\n5.  Diferncia en dias entre dos fechas");
    printf("\n6.  Mostrar dia de la semana segun un fecha");
    printf("\n7.  Volver");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            validar_fecha();
            break;
        case 2:
            dia_siguiente();
            break;
        case 3:
            sumar_dias_a_una_fecha();
            break;
        case 4:
            restarle_dias_a_una_fecha();
            break;
        case 5:
            diferencia_entre_fechas();
            break;
        case 6:
            dias_de_la_semana();
            break;
        case 7:
            menu_tp_1();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;

    }
}
