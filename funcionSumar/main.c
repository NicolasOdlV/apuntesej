#include <stdio.h>
#include <stdlib.h>
    int sumar(int,int);
int main()
{
    int a=7;
    int b=9;
    int rta;
    rta=sumar( a,b);

    printf("El resultado es: %d",rta);
    return 0;
}
int sumar(int x,int y)
{
    int resultado;
    resultado=x+y;
    return resultado;
}
