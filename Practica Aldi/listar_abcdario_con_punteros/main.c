#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, *pletra= &letra;
    int i;

    printf("MAYUSCULAS: \n");
    for(letra='A'; letra<='Z'; letra++)
    {
        printf("%c ", *pletra);
    }
    printf("\n----------------------------------------------------\n");
    printf("MINUSCULAS: \n");
    for(letra='a'; letra<='z'; letra++)
    {
        printf("%c ", *pletra);
    }
    printf("\n----------------------------------------------------\n");
    return 0;
}
