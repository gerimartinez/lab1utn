#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
// "nombre apellido" para cada uno, y mostrar por consola.

void main ()
{
    char nombre[10][20];
    char apellido[10][20];
    
    for(int i = 0; i < 2; i++)
    {
        printf("Ingrese su nombre \n", i+1);
        scanf("%s", &nombre[i]);

        printf("Ingrese su apellido \n", i+1);
        scanf("%s", &apellido[i]);

        strcat(nombre[i], " "); // Agregar un espacio entre nombre y apellido
        strcat(nombre[i], apellido[i]);
    }


    for(int i =0 ; i < 2; i++){

        printf("Nombre y apellido: %s\n", nombre[i]);
    }
     
    
    
}