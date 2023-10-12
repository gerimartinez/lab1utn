// array de cadenas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ingresar por consola los nombres de 10 alumnos, cargarlos en un array  y mostrarlos .
void main()
{
    char nombres[10][20]; // El primer corchete indica la cantidad de nombres que necesito almacenar.
                          // El segundo corchete indica la longitud máxima de cada nombre,
                          // es decir los 10 nombres ingresados deberán tener menos de 20 caracteres.

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el primer nombre del alumno %d", i + 1);
        scanf("%s", &nombres[i]);
    }

    printf("Los nombres ingresados son:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d - %s\n", i + 1, nombres[i]);
    }
char unNombre[20];

    // unNombre = nombres[0]; INCORRECTO, para realizar asignacion tengo que usar la función strcpy(arg1, arg2) Copia arg2 en arg1.

    strcpy(unNombre, nombres[0]); // copio el primer nombre que tengo almacenado en el arreglo nombres en el arreglo unNombre

    // nombres[5] = "valentino";  INCORRECTO, para realizar asignacion tengo que usar la función strcpy(arg1, arg2) Copia arg2 en arg1.
    strcpy(nombres[5], "valentino"); // asigno valentino al elemento que esta en la posición 5 del arreglo nombres

    printf("El nombre asignado en el arreglo unNombre es: %s", unNombre);
char nombreABuscar[20];

    printf("Ingrese el nombre a buscar\n");
    scanf("%s", &nombreABuscar);

    for (int i = 0; i < 10; i++)
    {
        /* if(nombreABuscar == nombres[i]) ///INCORRECTO, para realizar una comparación tengo que usar la función
                                              strcmp(arg1, arg2) Devuelve 0 si las cadenas representadas por
                                              arg1 y arg2 son iguales, o un valor menor que cero si arg1 precede
                                              alfabéticamente a arg2.
         {
             printf("Nombre encontrado");
         }*/

        int result = strcmp(nombres[i], nombreABuscar);

        if (result == 0)
        {
            printf("Nombre encontrado");
        }
    }
}


    // // leer por consola un nombre y mostrarlo

    // char nombreUsuario[20]; //longitud maxima

    // printf("Ingrese su nombre \n");
    // scanf("%s", &nombreUsuario); //fgets mas adecuada para leer cadenas

    // printf("El nombre ingresado es: %s", nombreUsuario);

