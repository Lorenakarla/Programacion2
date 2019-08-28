#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FACTORIAL 1
#define aMayus(x) ((x)>='a' && (x)<='z')? (x)-32 : (x)
#define aMinus(x) ((x)>='A' && (x)<='Z')? (x)+32 : (x)
#define esDigito(x) ((x)>='0' && (x)<='9')? 1 : 0
#define esLetra(x) ((x)>='A' && (x)<='Z') || ((x)>='a' && (x)<='z'))? 1 : 0


void ealax();
double e_a_la_x(int x, double tol);
int main()
{
//    ealax();

    char letra='a';
    ///otra forma de  convertir es a-A
    printf("Si convierto [%c] a mayus es [%c]", letra, aMayus(letra));
    printf("Si convierto [%c] a minus es [%c]", letra, aMinus(letra));
    return 0;
}

void ealax()
{
    double tol;
    int num;
    printf("\nCalculando e^x: ");
    printf("\nIngrese la tol y el numero a calcular: \n");

    scanf("%lf",&tol);
    scanf("%d",&num);

    printf("\EL resultado es %lf",e_a_la_x(num,tol));

}
double e_a_la_x(int x, double tol)
{
    double r=1, t=1;
    int i=1;

    while(t>tol)
    {
        t=pow(x,i)/FACTORIAL;
        ///t*=x/i;
        r+=t;
        i++;
    }
    return r;
}
