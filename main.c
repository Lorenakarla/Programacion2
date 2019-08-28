#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(int n);
double e_a_la_x(int x, int tol);

int main()
{
    int num, tol;
    printf("Ingrese un numero y una tolerancia: \n");
    scanf("%d",&num);
    scanf("%d",&tol);
    printf("\nEl numero calculado es %lf", e_a_la_x(num,tol));
    return 0;
}

double factorial(int n)
{
    int r=1,cont=1;

    while(cont <=n){
        r*=cont;
        cont++;
    }
    return r;
}

double e_a_la_x(int x, int tol)
{
    double rtdo=0;
    int i=0;

    while(rtdo < tol){
    rtdo+= pow(x,i)/ factorial(i);
    i++;
    }
    return rtdo;

}
