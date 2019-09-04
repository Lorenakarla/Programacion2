#include "menu_matematico.h"
#include "menu_tp_1.h"

void menu_matematico()
{
    int opcion;
    system("cls");
    printf("Trabajo practico 1 - Ejercicios matematicos\n");
    printf("\n--------------------------\n");
    printf("\n1.  Factorial de un numero");
    printf("\n2.  Combinatorio de dos numeros");
    printf("\n3.  Calculo de e a la x");
    printf("\n4.  Raiz cuadrada de un numero");
    printf("\n5.  Fibonacci");
    printf("\n6.  Calculo de seno(x)");
    printf("\n7.  Determinar si un numero natural es perfecto, deficiente o abundante");
    printf("\n8.  Obtener el producto de sumas sucesivas de dos numeros naturales");
    printf("\n9.  Obtener el cociente entero y el resto de dos numeros");
    printf("\n10. Calcular la suma de los primeros N numeros naturales");
    printf("\n11. Calcular la suma de los primeros N numero pares");
    printf("\n12. Calcular la suma de los primeros N numeros pares menores");
    printf("\n13. Multiplicacion rusa de dos numero naturales");
    printf("\n14. Determinar si un numero natural es primo");
    printf("\n15. Volver");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            system("cls");
            int numero;
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
            if(numero < 0){
                printf("El factorial de un numero negativo no existe!");
            }else{
                printf("El factorial de %d es: %.0f", numero, factorial(numero));
            }
            break;
        case 2:
            combinatorio();
            break;
        case 3:
            e_a_la_x();
            break;
        case 4:
            raiz_cuadrada();
            break;
        case 5:
            fibonacci();
            break;
        case 6:
            seno_de_x();
            break;
        case 7:
            numero_perfecto_defciente_abundante();
            break;
        case 8:
            producto_de_sumas_sucesivas();
            break;
        case 9:
            cociente_entero_y_resto();
            break;
        case 10:
            suma_primeros_n_numeros();
            break;
        case 11:
            suma_primeros_n_numeros_pares();
            break;
        case 12:
            suma_primeros_n_numeros_pares_menores();
            break;
        case 13:
            multiplicacion_rusa();
            break;
        case 14:
            numero_primo();
            break;
        case 15:
            menu_tp_1();
            break;
        default:
            printf("\nIngrese una opcion correcta: ");
            scanf("%d", &opcion);
            break;

    }
}
