#include "../../../Biblioteca/menu.h"
#include<stdio.h>


void mostrar_opciones()
{
    printf( "\n   1. Matematica\n");
    printf( "\n   2. Vectores\n");
    printf( "\n   3. Matrices\n");
    printf( "\n   4. Fechas\n");
    printf( "\n   5. Salir\n");
    printf( "\n\n   Introduzca opci%cn (1-5): ", 162 );
}

void menu_matematica()
{
    printf("**************************************************\n");
    printf("\n\tMenu Matematica\n\n");
    printf("**************************************************\n");
    printf("\n\t1. Factorial\n");
    printf("\n\t2. Combinatoria\n" );
    printf("\n\t3. Calcular e^x\n");
    printf("\n\t4. Calcular la raiz cuadrada\n");
    printf("\n\t5. Calcular la serie de Fibonacci\n");
    printf("\n\t6. Volver al menu principal\n");
    printf("\n\t0. Salir\n");
}

void menu_vectores()
{
    printf("**************************************************\n");
    printf("\n\tMenu Vectores\n\n");
    printf("**************************************************\n");
    printf("\n\t1. Insertar un elemento, dada la pos.\n");
    printf("\n\t2. Insertar un elemento, ordenadamente asc\n" );
    printf("\n\t3. Eliminar un elemento, dada la pos.\n");
    printf("\n\t4. Eliminar la primera aparicion de un elemento\n");
    printf("\n\t5. Eliminar todas las apariciones de un elemento\n");
    printf("\n\t6. Palindromo\n");
    printf("\n\t6. Normalizar\n");
    printf("\n\t7. Comprimir\n");
    printf("\n\t8. Descomprimir\n");
    printf("\n\t9. Volver al menu principal\n");
    printf("\n\t0. Salir\n");
}

void menu_matrices()
{
    printf("**************************************************\n");
    printf("\n\tMenu Matrices\n\n");
    printf("**************************************************\n");
    printf("\n\t1. Sumatoria de los elementos que estan por encima de la diagonal\n");
    printf("\n\t2. Sumatoria de los elementos que estan por debajo de la diagonal\n" );
    printf("\n\t3. Sumatoria de los elementos de la diagonal principal\n");
    printf("\n\t4. Sumatoria de los elementos de la diagonal secundaria\n");
    printf("\n\t5. Determinar matriz diagonal\n");
    printf("\n\t6. Determinar matriz identidad\n");
    printf("\n\t7. Determinar matriz simetrica\n");
    printf("\n\t8. Trasponer una matriz\n");
    printf("\n\t9. Producto de matrices\n");
    printf("\n\t10.Volver al menu principal\n");
    printf("\n\t0. Salir\n");

}

void menu_fechas()
{
    printf("**************************************************\n");
    printf("\n\tMenu Fechas\n\n");
    printf("**************************************************\n");
    printf("\n\t1. Fecha valida\n");
    printf("\n\t2. Sumas N dias a una fecha\n");
    printf("\n\t3.Volver al menu principal\n");
    printf("\n\t0. Salir\n");
}
void submenu1(int opcion)
{
    int num;

    switch(opcion)
    {
    case 1:
        system("cls");
        printf("\n---------------------------------------------\n");
        printf("\n\tFactorial\n\n");
        printf("\n---------------------------------------------\n");
        printf("\n\nIngrese un numero: ");
        scanf("%d",&num);
        printf("\n");
        printf("\n\nEl factorial es: %.2lf\n",factorial(num));
        printf("\n");
        system("pause");
        system("cls");
        menu_matematica();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        exit(0);

    }
}

void menu()
{
    int n, opcion;
    do
    {
        system("cls");
        mostrar_opciones();
        fflush(stdin);
        scanf( "%d", &opcion );
        /* Inicio del anidamiento */

        switch ( opcion )
        {
        case 1:
            menu_matematica();
            printf( "\n\n\tIntroduzca la opci%cn deseada: ", 162 );
            scanf( "%d", &n );
///                validar sub-opcion
            submenu1(n);
            break;

        case 2:
            menu_vectores();
            printf( "\n\nIntroduzca la opci%cn deseada: ", 162 );
            break;

        case 3:
            menu_matrices();
            printf( "\n\nIntroduzca la opci%cn deseada: ", 162 );
            scanf( "%d", &n );
            break;
        case 4:
            menu_fechas();
            printf( "\n\nIntroduzca la opci%cn deseada: ", 162 );
            break;
        }

        /* Fin del anidamiento */

    }
    while ( opcion != 5 );
//    while ( !(opcion < 1 || opcion > 4));
}
