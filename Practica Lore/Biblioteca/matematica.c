#include "matematica.h"
#include "menu.h"

double factorial(int n)
{
    int r=1,cont=1;

    while(cont <=n){
        r*=cont;
        cont++;
    }
    return r;
}

//double combinatorio(int n, int m)
//{
//
//}
