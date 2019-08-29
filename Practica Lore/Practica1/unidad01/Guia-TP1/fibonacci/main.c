#include <stdio.h>
#include <stdlib.h>

int esFibonacci(int n);
int main()
{
    int num;

    printf("\nIngrese el numero que desea comprobar que esta en la serie de fibonacci: ");
    scanf("%d",&num);
    if(esFibonacci(num))
        printf("\nEl numero %d SI pertenece a la serie\n",num);
    else
        printf("El numero %d NO pertenece a la serie\n", num);

    return 0;
}

int esFibonacci(int n)
{
    int n1=0;
    int n2=1;
    int t=0;
    int cont = 10;

   while(n!=t && cont>=0 )
    {
        t=n1+n2;
        n1=n2;
        n2=t;
        cont--;
    }

    return n==t ? 1 :0;
}
