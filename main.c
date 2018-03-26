#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int edad,edadBaja,nota,suma=0,notaBaja,notaJ,contadorH=0,contadorM=0,notaPriM,edadPriM;
    char sexo,sexoBajo,sexoJ;
    float promedio;
    for(int i=0; i<5; i++)
    {
        printf(" \n");
        do
        {
            printf("Ingrese nota del alumno %d: ",i+1);
            scanf("%d",&nota);
            setbuf(stdin,NULL);
        }
        while(nota<0||nota>10);
            suma+=nota;
        do
        {
            printf("Ingrese edad del alumno%d: ",i+1);
            scanf("%d",&edad);
            setbuf(stdin,NULL);
        }
        while(edad<0);
        do
        {
            printf("Ingrese sexo del alumno %d: ",i+1);
            scanf("%c",&sexo);
            sexo=tolower(sexo);
            setbuf(stdin,NULL);
        }
        while(sexo!='f'&&sexo!='m');
        if(i==0)
        {
            notaBaja=nota;
            edadBaja=edad;
        }
        if(nota<notaBaja)
        {
            notaBaja=nota;
            sexoBajo=sexo;
        }
        if(edad<edadBaja)
        {
            sexoJ=sexo;
            notaJ=nota;
        }
        if(nota>=6&&sexo=='m')
        {
            contadorH++;
        }
        if(sexo=='f'&&contadorM==0)
        {
            notaPriM=nota;
            edadPriM=edad;
        }
        if(sexo=='f'){
            contadorM++;
        }
    }//cierre for
    promedio=suma/5.0;
    printf("El promedio es: %.2f\n",promedio);
    printf("El alumno con nota baja: %d y sexo: %c\n",notaBaja,sexoBajo);
    printf("Cantidad de varones con nota mayor o igual a 6 son: %d\n",contadorH);
    printf("La nota del mas joven: %d y su sexo: %c\n",notaJ,sexoJ);
    if(contadorM==0)
    {
        printf("No hay ninguna mujer ingresada");
    }
    else
    {
        printf("La primer mujer ingresada tiene de nota: %d y edad: %d",notaPriM,edadPriM);
    }

    return 0;
}
