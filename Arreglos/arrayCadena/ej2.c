#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

void main ()
{
    char nombre1[20], nombre2[20];
    int resultado;

    printf("Ingrese un nombre \n");
    scanf("%s", &nombre1);

    printf("Ingrese un segundo nombre \n");
    scanf("%s", &nombre2);

    resultado = strcmp(nombre1, nombre2);

    if(resultado == 0) 
    {
        printf("Los nombres ingresados son iguales \n");

    } else if (resultado < 0) {

        printf("%s precede alfabeticamente a %s.\n", nombre1, nombre2);

    } else {
        
        printf("%s precede alfabeticamente a %s.\n", nombre2, nombre1);
    }
}