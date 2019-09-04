#include "menu_vectores.h"
#include "menu_tp_1.h"

void menu_vectores()
{
int opcion;
    system("cls");
    printf("Trabajo practico 1 - Ejercicios con vectores\n");
    printf("\n--------------------------\n");
    printf("\n1.  Insertar elemento, dada una posicion");
    printf("\n2.  Insertar elemento en array ordenado sin alter su orden");
    printf("\n3.  Eliminar elemento dada una posicion");
    printf("\n4.  Eliminar primera aparicion de un elemento");
    printf("\n5.  Eliminar todas las apariciones de un elemento");
    printf("\n6.  Determinar si una cadena de caracteres es un palindromo");
    printf("\n7.  Devolver el valor numerico de una cadena de caracteres");
    printf("\n8.  Volver");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            insertar_elemento_en_una_posicion();
            break;
        case 2:
            insertar_elemento_en_un_vector_ordenado();
            break;
        case 3:
            eliminar_elemento_de_un_vector();
            break;
        case 4:
            eliminar_primera_aparicion();
            break;
        case 5:
            eliminar_todas_las_apariciones();
            break;
        case 6:
            palindromo();
            break;
        case 7:
            pasar_string_a_int_cadena();
            break;
        case 8:
            menu_tp_1();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;

    }
}
